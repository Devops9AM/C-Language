#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num1,num2;
	system("clear");
	printf("\n enter First Number ");
	scanf("%d",&num1);
	printf("\n Enter Second Number ");
	scanf("%d",&num2);
	if(num1 != num2)
	{
		if(num1>num2)
		{
	printf("\n First Number is Graterthan Second Number %d\n",num1);
		}
		else
		{
	printf("\n Second Number is Graterthan First Number %d\n",num2);
		}
	}
	else
	{
		printf("\n Both Numbers are Equal %d and %d \n ",num1,num2);
}
}

