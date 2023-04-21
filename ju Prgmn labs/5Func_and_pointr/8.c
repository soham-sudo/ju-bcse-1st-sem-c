#include <stdio.h>
int lenght(char str1[])
{
    int i = 0;
    while(str1[i])
        i++;
    return i;
}
void reverse(char str1[],char str2[], int len)
{
    for(int i=0; str1[i]; )
    {
        int k=0;
        for(int j=i; j<len+1;j++)
        {
            if(str1[j]== ' ' || !str1[j]/*str1[j]=='\0'*/)
            {
                k=j;//k is index no. of space or null char
                break;
            }
        }
        
        for(int a=k-1;i<k;i++,a--)
            str2[i] = str1[a];
        str2[k] = str1[k];//for space including
        i=k+1;
    }
}
int main()
{
    char str2[50];
    char str1[50]={'\0'};
    //why dont know only char str1[50] does not compile in windows, ububntu ok
    //also scanf(" %%[^\n]s",str1"); solves the problem in this program?
    printf("Enter the string:");
    scanf("%[^\n]s",str1);
    int l = lenght(str1);
    
    reverse(str1, str2, l);
    printf("%s\n",str2);
}