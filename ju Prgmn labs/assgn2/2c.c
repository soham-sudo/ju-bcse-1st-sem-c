#include<stdio.h>
int main()
{
	int n, s=0;
	printf("input: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		int f=1;
		for(int j = 1; j<=i; j++)
		{
			f *= j;
		}
		s += f;
	}
	printf("%d\n", s);
}
