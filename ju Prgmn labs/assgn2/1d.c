#include<stdio.h>
#include<math.h>
int main()
{
	int n,r = 0,m=0,temp;
	printf("Input: ");
	scanf("%d", &n);
	while(n > 0)
	{
		r += (n%8)*pow(10,m);
		m++;
		n = n/8;
	}
	printf("%d",r);
}
