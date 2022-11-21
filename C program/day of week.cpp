//write a  c program to print day of week name using switch case.
#include<stdio.h>
int main()
{
	int day;
	printf("\n enter the day 1 to 7: ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("wednesday");
			break;
			
		case 4:
			printf("Thirsday");
			break;
			
		case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
			
		default :
			printf("\n Wrong choice");
			break;
			
	}
}