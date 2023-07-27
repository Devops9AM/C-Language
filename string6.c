#include<stdio.h>
#include<stdlib.h>

void main()
{
	char c[50];
	system("clear");
	printf("\n Enter any String : ");
	//scanf("%s",c);
	fgets(c, sizeof(c),stdin);
	printf("\n  Given String is \n\n\n");
	puts(c);

}

