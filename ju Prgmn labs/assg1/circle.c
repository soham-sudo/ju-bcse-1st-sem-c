#include<stdio.h>
#include<math.h>
int main(void)
{
	float x,y,r;
	printf("Center coordinates(x,y): ");
	scanf("%f, %f", &x, &y);
	
	printf("Radius: ");
	scanf("%f", &r);
	
	float a,b;
	printf("Input (x,y): ");
	scanf("%f, %f", &a, &b);
	
	int d = sqrt(pow(a-x,2) + pow(b-y,2));
	if(d == r)
	{
		printf("point on circle");
	}
	else if(d > r)
	{
		printf("point outside circle");
	}
	else
	{
		printf("point inside circle");
	}
}
	
