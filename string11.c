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
	if(strcmp(string1, string2) == 0)
	{
		printf("\n Given Strings are Equal %s %s\n\n\n",string1,string2);
	}
	else
	{
		printf("\n Given Strings are not Equal %s %s \n\n\n",string1,string2);
	}
}


