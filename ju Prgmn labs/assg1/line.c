#include<stdio.h>
int main()
{
	int x, y, a, b, c, d;
	printf("x1: ");
	scanf("%i", &x);
	printf("y1: ");
	scanf("%i", &y);
	 
	printf("x2: ");
	scanf("%i", &a);
	printf("y2: ");
	scanf("%i", &b);
	
	printf("x3: ");
	scanf("%i", &c);
	printf("y3: ");
	scanf("%i", &d);
	
	if(x*(b-d) - a*(y-d) + c*(y-b) == 0)
	{
		printf("Three points fall on st line");
		return 1;
	}
	printf("Three points does not fall on st line");
}
