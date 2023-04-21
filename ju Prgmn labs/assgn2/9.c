#include<stdio.h>

int main()
{
	int n,i,r;
	printf("Input Perfectsqaure: ");
	scanf("%d", &n);
	for(r=1; r<=n;r++)
	{
		int s=0;
		for(i=1; i<=2*r-1; i=i+2)
		{
			s=s+i;
		}
		if(s==n)
		printf("The squareroot of n:%d\n", r);
		else
		continue;
	}
}
