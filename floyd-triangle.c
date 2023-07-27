#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,c,n,a;
	system("clear");
	printf("\n Enter the number of Rows to print Floyd Triangel :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(c=1;c<=i;c++)
		{
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
}

