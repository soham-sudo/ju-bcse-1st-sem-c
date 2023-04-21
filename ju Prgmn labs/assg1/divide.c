#include<stdio.h>
int main()
{
	int n;
        int m;
	printf("Input: ");
	scanf("%i", &n);
	printf("Input2: ");
	scanf("%i", &m);
	if(m>n)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	int quotient;
	int remainder;
	quotient = n/m;
	remainder = n%m;
	printf("Fractional representation = %i + %i/%i\n", quotient, remainder, m);
	float dec = (float)n/m;
	printf("Decimal Representation = %.1f\n", dec);
}
