#include<stdio.h>
#include<stdlib.h>

void fun1(int n)
{
	if(n>0)
	{
		printf("%d\t\n",n);
		fun1(n-1);
	}
}
void main()
{
	int x=3;
	fun1(x);
}

