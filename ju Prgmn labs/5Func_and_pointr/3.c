#include <stdio.h>

int main()
{
    char str[20];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    for (i = 0; str[i]; i++)
    {
        if (i == 0)
            printf("%c", str[i]);
        if (str[i] == ' ')
            printf("%c", str[i + 1]);
    }
    printf("\n");
}