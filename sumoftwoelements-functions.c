#include<stdio.h>
#include<stdlib.h>

float sumoftwoelefun(float num[]);

int main()
{
	float result, num[]={21.4,12,56,32,87,60.49};
	system("clear");
	result = sumoftwoelefun(num);
		printf("Result of two elements are %.2f \n\n\n", result);
	return 0;
}
float sumoftwoelefun(float num[])
{
	float sum=0.0;
	for(int i=0;i<6;++i)
	{
		sum+=num[i];
		}
	return sum;
	}
	
