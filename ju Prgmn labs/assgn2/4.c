#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long int binaryTodecimal(char a[]);
long int decimalTobinary(long int n);
void octalTobinary(char a[]);
void hexTobinary(char a[]);
int main(void)
{
    int n;
    printf("What do u want to input?\n 1-Binary\n 2-Decimal\n 3-Hexadecimal\n 4-Octal\n");
    scanf("%d", &n);
    int m;
    printf("What do u want to output?\n 1-Binary\n 2-Decimal\n 3-Hexadecimal\n 4-Octal\n");
    scanf("%d", &m);
    long int a;
   
    switch (n)
    {
        case 1:
            printf("Input Binary(0,1 only): ");
            char b[20];
            scanf("%s",b);
            a=binaryTodecimal(b);
            break;
        case 2:
            printf("Input Decimal: ");
            scanf("%ld",a);
            if(m==1)
            {
                printf("Output Binary: %ld", decimalTobinary(a));
                exit(1);
            }
            break;
        case 3:
            if(m==1)
            {
                char s[10];
                printf("Input Hexadecimal: ");
                scanf("%s",s);
                printf("Binary: ");
                hexTobinary(s);
                exit(1);
            }
            printf("Input Hexadecimal: ");
            scanf("%lX",&a);
            break;
        case 4:
            if(m==1)
            {
                char s[10];
                printf("Input Octal: ");
                scanf("%s",s);
                printf("Binary: ");
                octalTobinary(s);
                exit(1);
            }
            printf("Input Octal: ");
            scanf("%lo",a);
            break;
       
    }
   
    switch(m)
    {
       //case 1 is done above
        case 2:
            printf("Output Decimal: %ld", a);
            break;
        case 3:
            printf("Output Hexadecimal: %lX", a);
            break;
        case 4:
            printf("Output Octal: %lo", a);
            break;
    }
}
long int binaryTodecimal(char a[])
{
    int n =strlen(a);
    long int s=0;
    for(int i=0, m=0; i<n; i++,m++)
    {
        s += (a[i]-48)*round(pow(2,m));
    }
    return s;
}
long int decimalTobinary(long int n)
{
    long int a=0;
    int m=0;
    while(n>0)
    {
        a += n%2*round(pow(10,m));
        m++;
        n /= 2;
    }
    return a;
}
//3bits in binary can represent a digit in oct, so oct no. = collection of 3bits one after another
void octalTobinary(char a[])
{
    int n = strlen(a);
    for(int i=0; i<n;i++)
    switch(a[i])
    {
        case'0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
    }
}
//4bits in binary can represent a digit in hex, so hex no. = collection of 4bits one after another
void hexTobinary(char a[])
{
    int n = strlen(a);
    for(int i=0; i<n;i++)
    switch(a[i])
    {
        case'0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'a': case 'A':
            printf("1010");
            break;
        case 'b': case 'B':
            printf("1011");
            break;
        case 'c': case 'C':
            printf("1100");
            break;
        case 'd': case 'D':
            printf("1101");
            break;
        case 'e': case 'E':
            printf("1110");
            break;
        case 'f': case 'F':
            printf("1111");
            break;
    }
}
