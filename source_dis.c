/*
 * dis_source.c
 *
 *  Created on: Oct. 23, 2020
 *      Author: rohan
 */


#include<stdio.h>
int main()
{
	FILE *p;
	int c;

	p=fopen("dis_source.c","r");
	do{
		c=fgetc(p);
		putchar(c);
	}
	while(c!=EOF);

	fclose(p);
	return 0;
}
