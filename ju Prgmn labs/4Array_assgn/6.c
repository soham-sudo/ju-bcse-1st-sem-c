#include <stdio.h>

int main()
{
    int n;
    printf("No. of students: ");
    scanf("%d", &n);
    char s[n][10];
    int marks[n][5];//marks[0][0] is markof sub0 of student0
    for(int i=0; i<n; i++)
    {    
        printf("Name: ");
        scanf("%s", s[i]);
        for(int j=0; j<5; j++)
        {
            printf("score of sub%d :", j);
            scanf("%d", &marks[i][j]);
        }
    }
    /*for(int i=0; i<n; i++)
    {    
        printf("Name: %s\n", s[i]);
    }*/
    for(int i=0; i<5; i++)//for subi
    {
        int max1=0,max2=0;
        for(int j=0; j<n; j++)//for student marks in subi
        {
            if(max1 < marks[j][i])
            {
                max2=max1;
                
                max1=marks[j][i];
                
            }
        }
        if(max1== marks[0][i])
            for(int j=1; j<n; j++)
            {
                if(max2 < marks[j][i])
                {
                    max2=marks[j][i];
                }
            }
        printf("In sub%d 1st-",i);
        for(int j=0;j<n;j++)
        {
            if(max1==marks[j][i])
                printf("%s,",s[j]);
        }
        printf("2nd-");
        for(int j=0;j<n;j++)
        {
            if(max2==marks[j][i])
                printf("%s,",s[j]);
        }
        printf("\n");
    }
}