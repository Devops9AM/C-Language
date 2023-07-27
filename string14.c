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
        strcpy(string1, string2);
        
                printf("\n String 2 Copined into String 1 %s \n\n\n",string1);
        
}

