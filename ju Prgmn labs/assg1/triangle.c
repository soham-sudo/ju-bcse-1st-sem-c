#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, A, B, C;
	printf("Angle1: ");
	scanf("%i", &a);
	printf("Angle2: ");
	scanf("%i", &b);
	printf("Angle3: ");
	scanf("%i", &c);
	
	printf("Side1: ");
	scanf("%i", &A);
	printf("Side2: ");
	scanf("%i", &B);
	printf("Side3: ");
	scanf("%i", &C);
	
	if(a + b + c == 180)
	{
		if(A + B > C && B + C > A && C + A > B)
		{
				printf("Given Values represent a triangle\n");
				exit(1);
		}
	}
	else
	{
		printf("Given Values does notrepresent a triangle\n");
	}
}
	
