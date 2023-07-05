#include<stdio.h>
#include<stdlib.h>

void main()
{
	double num1,num2,result;
		system("clear");
		printf("\n Enter First Number: ");
		scanf("\n %lf",&num1);
		printf("\n Enter 2nd Number: ");
		scanf("%lf",&num2);
		result=num1*num2;
		printf("\n The Result of two numbers: %.4lf\n\n",result);
}


