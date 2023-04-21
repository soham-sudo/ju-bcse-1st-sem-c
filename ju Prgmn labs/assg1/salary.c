#include<stdio.h>
int main()
{
	float salary;
	printf("Your salary: ");
	scanf("%f", &salary);
	float g, d, h;
	d = salary*0.6;
	h = salary*0.15;
	g = salary + d + h;
	printf("Gross Salary = %.1f\n", g);
}
