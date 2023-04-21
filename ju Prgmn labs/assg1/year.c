#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y = 0;
	printf("Year :");
	scanf("%i", &y);
	if(y%100 == 0)
	{
		if(y%400 == 0)
		{
			printf("%i is a leap year", y);
			exit(1);
		}
		else
		{
			printf("%i is not a leap year", y);
			exit(1);
		}
	}	
	else if(y%4 == 0)
	{
		printf("%i is a leap year", y);
		exit(1);
	}
	printf("%i is a not leap year\n", y);
}
		
		
