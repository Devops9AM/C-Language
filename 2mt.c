#include<stdio.h>
#include<stdlib.h>

void main()
{
        int a[10][10],b[10][10],sum[10][10],i,j,r,c;
        
        system("clear");
        printf("\n Enter 1st Matrix of number of Rows :");
        scanf("%d",&r);
        printf("\n Enter 1st Matrix of Number of Columns :");
        scanf("%d",&c);

        printf("\n Enter The Matrix Elements:: \n ");
                        for(i=0;i<r;i++)
                        {
                        for(j=0;j<c;j++)
                        {
                        printf("\n Enter Element [%d][%d]  :",i,j,j+1);
                        scanf("%d",&a[i][j]);
                        }
			printf("\n");
                        }

 printf("\n Enter 2nd Matrix of number of Rows :");
        scanf("%d",&r);
        printf("\n Enter 2nd Matrix of Number of Columns :");
        scanf("%d",&c);

        printf("\n Enter The Matrix Elements:: \n ");
                        for(i=0;i<r;i++)
                        {
                        for(j=0;j<c;j++)
                        {
                        printf("\n Enter Element [%d][%d]  :",i,j,j+1);
                        scanf("%d",&b[i][j]);
                        }
                        }


//1st matrix out put
printf("\n 1st Matrix out Put is : \n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
        }

//2nd matrix out put
printf("\n 2nd Matrix out Put is : \n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        printf("%d\t",b[i][j]);
        }
        printf("\n");
        }

 // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
    

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }


}
