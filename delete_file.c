/*
 * delete.c
 *
 *  Created on: Oct. 29, 2020
 *      Author: rohan
 */
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	int ret;
	fp=fopen("mytext.txt","w");
	fputs("fputs command for writting into file.",fp);
	fclose(fp);

	ret=remove("mytext.txt");

	if (ret==0){
		printf("file is deleted");
	}
	else{
		printf("error! unable to delete file");
	}

	return 0;
}


