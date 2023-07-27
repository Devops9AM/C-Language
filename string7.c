#include<stdio.h>
#include<stdlib.h>
void displayString(char c[]);
int  main()
{
	char c[50];
	system("clear");
	printf("\n Enter any String : ");
	fgets(c, sizeof(c),stdin);
	displayString(c);
	return 0;

}
void displayString(char c[])
{
	printf("\n String Output is: ");
	puts(c);
}

