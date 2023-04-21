#include<stdio.h>
int main()
{
	char a;
	printf("char: ");
	scanf("%c", &a);
	if(a >='A' && a <='Z' )
	{
		printf("capital letter");
	}
	else if(a >='a' && a <='z' )
	{
		printf("small letter");	
	}
	else if(a >='0' && a <='9' )
	{
		printf("digit");
	}
	else if((a >=33 && a <=47) || (a >=58 && a <=64) || (a >=91 && a <=96) || (a >=123 && a <=126.))
	{
		printf("special");
	}
}
