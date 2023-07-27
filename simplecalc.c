#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

void main()
{
	char operator;
	double num1,num2;
	system("clear");
	printf("\n Enter an OPerator(+, -, *, /):");
	scanf("%c",&operator);
	printf("\n Enter Two Operands: ");
	scanf("%lf %lf",&num1,&num2);
	switch(operator)
	{
	case '+':
		printf("\n %.1lf + %.1lf =%.1lf\n\n",num1,num2, num1+num2);
		break;
	case '-':
	printf("\n  %.1lf - %.1lf =%.1lf\n\n",num1,num2, num1-num2);
	break;
	case '*':
        printf("\n  %.1lf * %.1lf =%.1lf\n\n",num1,num2, num1*num2);
        break;
	case '/':
        printf("\n  %.1lf / %.1lf =%.1lf\n\n",num1,num2, num1/num2);
        break;
	default:
	printf("\n Error..! given input values are not valid");
}



}
