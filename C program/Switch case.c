//switch case 
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,c,ch;
	do
	{
	
	printf("\n enter a & b ");
	scanf("%d%d",&a,&b);
	printf("\n1.add \n2.sub \n3.mul \n4.div");
	printf("\n enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("\n add=%d",c);
			break;
		
		case 2:
			c=a-b;
			printf("\n sub=%d",c);
			break;
			
		case 3:
			c=a*b;
			printf("\n mul=%d",c);
			break;
			
		case 4:
			c=a/b;
			printf("\n div=%d",c);
			break;
			
		case 5:
			exit(0);
			
		default:
			printf("\n wrong choice");
			break;
							
			
	}
   }while(ch!=5);
}