#include<stdio.h>
#include<stdlib.h>


void main()
{
	int arr[50],size,i,sum,product;
      system("clear");
	printf("\n Enter How many Elements You want : ");
	scanf("%d",&size);
	//printf("\n Enter %d Elements:", size);
	for(i=0;i<=size;i++)
	{
		
	printf("\n Enter %d Elements:", i);
		scanf("%d",&arr[i]);
	}
	sum=0;
	product=1;
		printf("\n The Sum of One-Dimensional Arry Elements are ");
		for(i=0;i<=size;i++)
		{
		sum=sum+arr[i];
		product=product*arr[i];
		
//	printf("\n%d\n",arr[i]);
		}
		printf("\n Sum of arrays is : %d\n", sum);
		printf("\n The product of array is %d\n",product);
	}

