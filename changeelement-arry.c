#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num[5]={50,30,23,10,70};
	int b;
	num[3]=600;
	num[0]=430;
	for(b=0;b<5;b++)
	{
		printf("%d ",num[b]);
	}

}
