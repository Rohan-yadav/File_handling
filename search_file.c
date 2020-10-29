/*
 * search.c
 *
 *  Created on: Oct. 29, 2020
 *      Author: rohan
 */

#include <stdio.h>
#include <string.h>

int main()
{
   FILE *fp;
   char word[50];
   char ch;
   char *filename = "mytext.txt";
   char *search = "about";
   int count = 0;

   /*  open for writing */
   fp = fopen(filename, "r");

   do
   {
      ch = fscanf(fp, "%s", word);
      if(strcmp(word, search) == 0)
         count++;
   } while (ch != EOF);

    if(count>=1)
        printf("'%s' found in %s %d times\n", search, filename,count);
    else
        printf("'%s' does not found in %s\n", search, filename);

   fclose(fp);
   return 0;
}
