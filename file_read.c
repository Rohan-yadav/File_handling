/*
 * file_read.c
 *
 *  Created on: Oct. 21, 2020
 *      Author: rohan
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	FILE *fptr;

	if((fptr=fopen("number.txt","r"))==NULL){
		printf("Error!File does not exist");
		exit(1);
	}
	fscanf(fptr,"%d",&num);

	printf("value of num=%d",num);
	fclose(fptr);
	return 0;
}
