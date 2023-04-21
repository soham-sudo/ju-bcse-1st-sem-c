#include<stdio.h>
#include<stdlib.h>
int main()
{
int c=0;
int n=1;
	while(c<10)
	{
		int m = n;
		for(int j = 1;j <=100 ; j++)
		{
			int s = 0;
			while(m > 0)
			{
				int b=m%10;
				s += b*b;
				m = m/10;
			}
			m=s;
			if(m==1)
			{
				printf("%d\n", n);
				c++;
				break;
			}
		}
		n++;
	}
}
