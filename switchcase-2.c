#include<stdio.h>
#include<stdlib.h>

void main()
{
	char operator;
	double num1,num2;
	system("clear");


	printf("\n\n Choose which you want to do ");
        printf("\n + Addition");
        printf("\n - Subtraction");
        printf("\n * Mulitiplication");
        printf("\n / Division");

        printf("\n\n\n Choose which one you want from above list:  ");
        scanf("%c",&operator);





	printf("\n Enter Number 1 Vlaue : ");
	scanf("%lf",&num1);
	printf("\n Enter Number 2 Vlaue : ");
	scanf("%lf",&num2);

/*	printf("\n\n Choose which you want to do ");
	printf("\n + Addition");
	printf("\n - Subtraction");
	printf("\n . Mulitiplication");
	printf("\n 4. Division");
	
	printf("\n\n\n Choose which one you want from above list");
	scanf("%c",&operator);*/
	switch(operator)
	{
		case '+':
		printf("\n %.1lf + %.1lf = %.1lf\n\n",num1,num2,num1+num2);
		break;

		case '-':
		printf("\n %.1lf - %.1lf = %.1lf\n\n",num1,num2,num1-num2);
		break;

		case '*':
		printf("\n %.1lf * %.1lf = %.1lf\n\n",num1,num2,num1*num2);
		break;

		case '/':
		printf("\n %.1lf / %.1lf = %.1lf\n\n",num1,num2,num1/num2);
		break;

		default:
		printf("\n Error..! Given input Values are wrong \n\n\n\n");
	
	}

}

