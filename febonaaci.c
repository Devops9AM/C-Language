#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,n,t1=0,t2=1,nextnumber=t1+t2;
	system("clear");
	printf("\n Enter any size of number");
	scanf("%d",&n);
	printf("\n The Fibonacci Series is %d, %d\n\t",t1,t2);
	for(i=3;i<=n;i++)
	{
		printf("%d\n\t",nextnumber);
		t1=t2;
		t2=nextnumber;
		nextnumber=t1+t2;
	}
}

