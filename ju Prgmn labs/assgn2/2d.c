#include<stdio.h>
int main()
{
	int n, s=0;
	printf("input: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		int f= 0;
		for(int j = 1; j <= i; j++)
		{
			if(i%j == 0)
			{
				f += j;
			}
		}
		s += f;
	}
	printf("%d\n", s);
}
