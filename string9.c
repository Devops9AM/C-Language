#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char string[50];
	system("clear");
	printf("\n Enter Any string :");
	scanf("%s",string);
	printf("\n Given String is %s  and Its Lenght is %ld\n\n\n\n",string, strlen(string));
}

