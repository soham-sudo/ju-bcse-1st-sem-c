#include <stdio.h>
int main()
{
    char str[100];
    int i, num=0;
    printf("Enter a string: "); 
    scanf("%s", str);
    for(i=0; str[i]; i++)
    { 
        if(str[i]>='0' && str[i]<='9')
        {
                num = num*10 + (str[i]-'0');
        }
    }
    printf("%d\n", num);
}