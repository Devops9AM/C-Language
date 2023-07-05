#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num1,num2,temp;
	system("clear");
	printf("\n Enter first Number : ");
	scanf("%d",&num1);
	printf("\n Enter 2nd Number :");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\n %d is number after swaping \n",num1);
	printf("\n %d is number after swaping\n",num2);
}


	
