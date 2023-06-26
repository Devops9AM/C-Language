#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>


void main()
{
	int i,j,table;
	system("clear");
printf("\n Enter how many tables you want to print :  ");
	scanf("%d",&table);
	for(i=1;i<=table;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n %d * %d = %d",i,j,i*j);
		}
	printf("\n");
	}
}

