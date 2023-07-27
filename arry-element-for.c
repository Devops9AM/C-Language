#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,num[5];
	system("clear");
//	printf("\n Enter A Element : ");
	for(a=1;a<=5;a++)
	{

	printf("\n Enter A %d Element : ",a);
	scanf("%d",&num[a]);
	}
	printf("\n The Elements  are : ");
	for(b=1;b<=5;b++)
	{
	printf("\n The Element of  Arry nuymber %d = %d\t",b,num[b]);
	printf("\n");

	}
}


