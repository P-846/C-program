//Write a c program print total number of days in a month using switch case.
#include<stdio.h>
main()
{
	int month,d;
	printf("\n enter month from 1 to 12:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("31 days in January");
			break;
			
		case 2:
			printf("28-29 days in February");
			break;
			
		case 3:
			printf(" 31 days in March");
			break;
			
		case 4:
			printf("30 days in April");
			break;
			
		case 5:
			printf(" 31 days in May");
			break;
			
		case 6:
			printf(" 30 days in June");
			break;
			
		case 7:
			printf(" 31 days in July");
			break;
			
		case 8:
			printf("31 days in August");
			break;
			
		case 9:
			printf("30 days in September");
			break;
			
		case 10:
			printf(" 31 days in October");
			break;
			
		case 11:
			printf("30 days in November");
			break;
			
		case 12:
			printf("31 days in December");
			break;
			
		default:
			printf("Wrong choice");
	}
}