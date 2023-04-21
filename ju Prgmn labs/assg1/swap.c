#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Number :");
	scanf("%i", &a);
	printf("Number2 :");
	scanf("%i", &b);
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("Swaped %i, %i\n", a, b);
}

