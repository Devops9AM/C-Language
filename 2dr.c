#include<stdio.h>
#include<stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	system("clear");
	printf("\n Enter number of Rows :");
	scanf("%d",&r);
	printf("\n Enter Number of Columns :");
	scanf("%d",&c);
	
	printf("\n Enter The Matrix Elements:: \n ");
			for(i=0;i<r;i++)
			{
			for(j=0;j<c;j++)
			{
			printf("\n Enter Element [%d][%d]  :",i,j,j+1);
			scanf("%d",&matrix[i][j]);
			}
			}

	printf("\n Matrix out is : \n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\t",matrix[i][j]);
	}
	printf("\n");
	}
	}

			
