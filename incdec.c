#include<stdio.h>
#include<stdlib.h>
		
void main()
{
        int n1,n2,n3,n4;
        system("clear");
        printf("\n Enter Number 1");
        scanf("%d",&n1);
        printf("\n Enter Number 2");
        scanf("%d",&n2);
        printf("\n Enter Number 3");
        scanf("%d",&n3);
        printf("\n Enter Number 4");
        scanf("%d",&n4);
//pre post increment
        printf("n1 n1++ %d = \n",n1++);
//post decrement
        printf("n2 %d = \n",n2--);

                //pre increment
                printf("n3 ++n3= %d\n",++n3);
                //pre decrement
                printf("n4 --n4= %d\n",--n4);
}

