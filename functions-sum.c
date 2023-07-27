#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
	int c;
	c=a+b;
	return(c);
}
void main()
{
	int x,y;
	system("clear");
	x=10;
	y=50;
	int z=add(x,y);
	printf("\n The Sum of Two Values are %d\n\n\n",z);
//	getch();

}

