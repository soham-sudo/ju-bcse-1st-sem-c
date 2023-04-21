#include<stdio.h>
int main()
{
	for(int i = 1; i <= 500; i++)
	{
		int n=i;
		int s=0;
		while(n>0)
		{
			int b=n%10;
			s += b*b*b;
			n = n/10;
		}
		if(s == i)
		printf("%d\n", i);
	}
}
