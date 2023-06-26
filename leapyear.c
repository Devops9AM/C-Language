#include<stdio.h>
#include<stdlib.h>

void main()
{
	int year;
	system("clear");
		printf("\n Enter any year : ");
	scanf("%d",&year);
	
		if(year%400==0)
		{
			printf("\n Given Year is Leap Year %d\n",year);
		}
			else
			
				if(year%100==0)
				{
					printf("\n Given Year is not Leap Year %d\n",year);
			}
	else if(year%4==0)
	{
		printf("\n Given Year is Leap year %d\n",year);
	}
	else
	{
		printf("\n Given year is Not a Leap Year %d\n",year);
}
}


