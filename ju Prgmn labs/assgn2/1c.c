#include<stdio.h>
int prime(int a);
int main()
{
	int n;
	printf("No.");
	scanf("%d", &n);
	if(prime(n))
	{
		printf("%d is itself prime\n",n);
	}
	for(int i =2; i < n; i++)
	{
		if(n%i == 0)
		{
			if(prime(i))
			{
				printf("%d ", i);
			}
		}
	}
}
int prime(int a)
{
	if(a == 2)
	{
		return 1;
	}
	for(int i = 2; i < a; i++)
	{
		if(a%i == 0)
		{
			return 0;	
		}
	}
	return 1;
}
