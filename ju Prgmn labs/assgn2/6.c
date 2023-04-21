#include<stdio.h>
int main()
{
	int n,a=0, b=1,s;
	printf("input: ");
	scanf("%d", &n);
	printf("%d ",a);
	printf("%d ",b);
	for(int i = 1; i <= n-2; i++)
	{
		s = a+b;
		printf("%d ", s);
		a=b;
		b=s;
	}
	printf("\n");
}
