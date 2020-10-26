
# include <stdio.h> 
# include <string.h> 
   
int main( ) 
{ 
  
    // Declare the file pointer 
    FILE *filePointer ; 
      
    // Get the data to be written in file 
    char dataToBeWritten[50]  
        = "data entry for file"; 
  
   
    filePointer = fopen("file.c", "w") ; 
      
    // Check if this filePointer is null 
    // which maybe if the file does not exist 
    if ( filePointer == NULL ) 
    { 
        printf( "file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The file is now opened.\n") ; 
          
        
        if ( strlen (  dataToBeWritten  ) > 0 ) 
        { 
              
            // writing in the file using fputs() 
            fputs(dataToBeWritten, filePointer) ;    
            fputs("\n", filePointer) ; 
        } 
          
        // Closing the file using fclose() 
        fclose(filePointer) ; 
          
        printf("Data successfully written in file \n"); 
        printf("The file is now closed.") ; 
    } 
    return 0; 
