#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void main()
{
        int a,b,btech,degree;
        system("clear");
        printf("\n 1.B.Tech ");
        printf("\n 2.Degree ");
        printf("\n Enter your Selection: ");
        scanf("%d",&a);
        switch(a)
        {
                case 1:
                        printf("\n You have Choosen B.Tech:");
                        printf("\n 1. Computer Scicence B.Tech: ");
                        printf("\n 2. Information Technologies B.Tech:");
                        printf("\n 3. Electronical and Communinications B.Tech");
                        printf("\n 4. Electrical and Electronincs:");
                        printf("\n Choose Which one YOu want:");
                        scanf("%d",&btech);
                        switch(btech)
                        {
                                case 1:
                                        printf("\n You have choosen Computer Science:\n\n");
                                        break;

                                case 2:
                                 printf("\n you have choosen Information Technologies:\n\n");
                                        break;
                                case 3:
                                        printf("\n you hoave shoosen ECE :\n\n");
                                        break;
                                case 4:
                                        printf("\n you have shoosen EEE :\n\n");
                                        break;

                                default:
                                        printf("\n You have choosen invalid Option:\n\n");
				//break;
                        }
			break;

                 case 2:
                   printf("\n Welcome To  General Degree\n\n");
                   printf("\n 1. Bsc Computers");
                   printf("\n 2. Bsc General");
                   printf("\n 3. Bsc Agri ");
                   printf("\n 4. Bsc Bio-Tech");
                   printf("\n 5. Bcom Computers ");
                   printf("\n 6. B.Com General");
                   printf("\n 7. B.A Gengral");
                   printf("\n 8. B.A Computers");
                        
                        printf("\n\n Choose which Course You want : \n\n ");
                        scanf("%d",&b);
                                switch(b)
                                {
                                        case 1:
                                        printf("\n You have choosen Bsc Computers\n\n");
                                        break;
                                        case 2:
                                        printf("\n You have choosen Bsc General\n\n");
                                        break;
                                        case 3:
                                          printf("\n You have choosen Bsc Bio-Tech\n\n");
                                                   break;
         

                                        case 4:
                                           printf("\n You have choosen Bsc Agri \n\n");
                                                   break;
                                

                                        case 5:
                                        printf("\n You have choosen Bcom Computers\n\n ");
                                                break;

                                        case 6:
                                         printf("\n You have choosen B.Com General\n\n");
                                                break;


                                        case 7:
                                         printf("\n You have choosen B.A Gengral\n\n");
                                             break;
                                        
                                        case 8:
                                         printf("\n You have choosen B.A Computers\n\n");
                                                break;
                                        default:
                                        printf("\n You Have Choosen invalid Option\n\n");
				//	break;
                                }
				break;
                 default:
                 printf ("\n You Have Choosen Worng Option\n\n");
		 break;
         }

 }
                                    
