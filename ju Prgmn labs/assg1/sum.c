#include<stdio.h>
int main()
{
	int n, temp, sum = 0;
	printf("Input: ");
	scanf("%i", &n);
	temp = n;
	while(temp > 0)
	{
		sum += temp%10;
		temp = temp/10;
	}
	printf("Sum = %i\n", sum);
}
