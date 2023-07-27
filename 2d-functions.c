#include<stdio.h>
#include<stdlib.h>

void dispnum(int num[2][2]);

int main()
{
	int num[2][2];
	printf("\n Enter any 4 Numbers:\n");
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			scanf("%d",&num[i][j]);
		}
	}
dispnum(num);
return 0;
}
void dispnum(int num[2][2])
{
	printf("\n Displaying the Give Numbers:\n\n\n");
	 for(int i=0;i<2;++i)
        {
                for(int j=0;j<2;++j)
                {
			printf("%d\n",num[i][j]);
		}
	}
}

