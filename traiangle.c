#include<stdio.h>
#include<stdlib.h>

void main()
{
	int row,c,n;
	printf("\n Enter the number of rows in pyramid of stars to print  :");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		{
			for(c=1;c<=n-row;c++)
				printf(" ");
		}
		for(c=1;c<=2*row-1;c++)
		printf("*");
		printf("\n");
	}
}

