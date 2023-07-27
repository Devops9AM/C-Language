#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
        char string1[50],string2[50];
        system("clear");
        printf("\n Enter Any one First String :");
        scanf("%s",string1);
         printf("\n Enter Any one Second String :");
        scanf("%s",string2);
	strcat(string1,string2);
	printf("\n The Out put is after cont of 2 strings %s\n\n\n\n",string1);
}

