#include<stdio.h>
#include<stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void main()
{
        int matrix[MAXROW][MAXCOL];
        int i,j,r,c,xr,yc;
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
                        scanf("%d",&matrix[i][j]);
                        }
                        }
//First Matrix elements Over

                        //2nd Matrix Elements start


 printf("\n Enter 2nd Matrix of number of Rows :");
        scanf("%d",&xr);
        printf("\n Enter 2nd  Matrix of Number of Columns :");
        scanf("%d",&yc);

        printf("\n Enter The Matrix Elements:: \n ");
                        for(i=0;i<xr;i++)
                        {
                        for(j=0;j<yc;j++)
                        {
                        printf("\n Enter Element [%d][%d]  :",i,j,j+1);
                        scanf("%d",&matrix[i][j]);
                        }
                        }


        printf("\n 1st Matrix out Put is : \n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        printf("%d\t",matrix[i][j]);
        }
        printf("\n");
        }


        printf("\n 2nd Matrix out Put is : \n");
        for(i=0;i<xr;i++)
        {
        for(j=0;j<yc;j++)
        {
        printf("%d\t",matrix[i][j]);
        }
        printf("\n");
        }





        }

                                              
