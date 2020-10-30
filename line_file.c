/*
 * line_file.c
 *
 *  Created on: Oct. 30, 2020
 *      Author: rohan
 */
#include<stdio.h>

int main()
{
	FILE *fptr;
	int line = 0;
	char c;
	fptr = fopen("mytext.txt","r");
	if(fptr == NULL){
		printf("Could not open the file");
	}

	do{
		c=getc(fptr);
		if(c=='\n')
			line=line+1;
	}while(c != EOF);

	printf("Line in mytext.txt file is %d",line-1);
	return 0;
}
