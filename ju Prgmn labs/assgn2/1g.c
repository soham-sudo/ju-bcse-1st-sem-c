#include<stdio.h>
int main()
{
	int n;
	printf("No.");
	scanf("%d", &n);
	while(n > 0)
	{
		printf("%d", n%10);
		n = n/10;
	}
}
