#include<stdio.h>
#include<stdlib.h>

void main()
{
	int number;
	system("clear");
	printf("\n Enter any One Number ");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("\n Given Number is Even %d\n",number);
	}
	else 
	{
		printf("\n Given Number is Odd %d\n",number);
	}
}


