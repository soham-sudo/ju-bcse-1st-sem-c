#include<stdio.h>
int main()
{
	int n, s=0;
	printf("input: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		s += i*(i+1);
	}
	printf("%d\n", s);
}
