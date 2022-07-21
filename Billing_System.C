#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct name
{
  char b[30];
  int price,qty,t,h;

};
struct name s[30];

int main()
{
      int ch,z,n,i,y,j,grand_total=0,x;
      char b;

      system("cls");
      
      printf("********Bill system******\n") ;
      printf("------------------------------------------------");
      printf("\n\n");
XYZ:  printf("***choose your option***\n\n");
      printf("1.Mall owner \n2.Customer\n\n");
      printf("------------------------------------------------");
      
      printf("\nEnter your choice : ");
      scanf("%d", &ch);
      system("cls");
      
    switch(ch)
 	{
	 	case 1: printf("\n              *** Mall owner ***");
	 			printf("\n------------------------------------------------\n");
	      		printf("1.Show list\n2.Update list");
	      		printf("\n------------------------------------------------");
	      		printf("\n\nEnter your choice : ");
	      		scanf("%d",&z);
	      		system("cls");
	      		switch(z)
	      		{
	       			case 1: printf("\n------------------------------------------------\n");
					   		printf("                *** product list ***");
							printf("\nSr.no          Product list          Price \n");
							for(i=1;i<=n;i++)
							{
							   printf("  %d                  %s            %d \n",i,s[i].b,s[i].price);
							}
							system("cls");
							goto XYZ;


			        case 2:	printf("\n------------------------------------------------\n");
					   		printf("                *** Update list ***");
					   		printf("\n------------------------------------------------\n");
							printf("Enter the number of the products");
							printf("\t");
							scanf("%d",&n);
							printf("Enter the products names codes and their prices");
							printf("\n");
							printf("\n Sr.no.\t\t Product name \t\t Price\n");
							for(i=1; i<=n; i++)
							{
							    printf("\n  %d          ",i);
							    scanf("%s",s[i].b);
							    printf("            ");
							    scanf("%d",&s[i].price);
							}
							system("cls");
			 				goto XYZ;
			 				
			 				
		 			default:printf("YOU HAVE ENTER WRONG CHOICE");
		 					system("cls");
		 					goto XYZ;
		 		}
		 		
       	case 2: printf("\n*** Customer ***");
	   			ABC:    printf("\n\n1.Buy product\n 2.cart\n3.Generate bill\n\n");
	       		printf("Enter your choice");
	       		scanf("%d",&y);
	       		system("cls");
	       		switch(y)
	       		{
		    		case 1: printf("**** Product list ****");
			    			printf("\n Sr.no.\t\t Product Name \t\t Price \n");
						    for(i=1;i<=n;i++)
						    {
						    	printf("%d\t\t %s\t%d\n\n",i,s[i].b,s[i].price);
						    }
			     			printf("\n\n");

						    printf("Enter how many products you have to buy\t\t");
						    scanf("%d",&x);
						    
			
						    printf("\n\nEnter product no");
						    printf("\n Enter quantity");


			     			for(j=1;j<=x;j++)
			     			{
								scanf("%d",&s[j].h);
								printf("\t\t");
								scanf("%d",&s[j].qty);
								printf("\n");
			     			}
			     			goto ABC;


		   			case 2: printf("***cart***");
			     			printf("\n\n");


			       			printf("Sr.no\t\tProduct Name\t\tPrice\t\tQuantity\n");
							for(j=1;j<=x;j++)
							{
					 			for(i=1;i<=n;i++)
					  			{
					      			if(s[j].h==i)
					      			{
	
						  				printf("%d\t\t%s\t\t%d\t\t%d",i,s[i].b, s[i].price,s[j].qty);
	
						  				printf("\n");
	
					      			}
					  			}
			    			}
			    			goto ABC;

					case 3: printf("*****Generate Bill");
			
						    printf("\nsr.no.\tproduct name\t price\t qty\t total\n");
						  	for(j=1;j<=x;j++)
						  	{
						     	for(i=1;i<=n;i++)
						     	{
						       		if(s[j].h==i)
						       		{
							   			s[i].t=s[i].price*s[j].qty;
							   			printf("\n%d\t%s\t%d\t%d\t%d",i,s[i].b,s[i].price,s[j].qty,s[i].t);
						       		}
			
						     	}
						   	}
							for(i=1;i<=n;i++)
							{
								grand_total=grand_total+s[i].t;
						    }
						    printf("\ngrand total\n");
							printf("\n%d",grand_total);
						    printf("***THANK YOU****");
				}
		default:printf("Wrong Choise ! ");     
	}
	return 0 ;
 }

