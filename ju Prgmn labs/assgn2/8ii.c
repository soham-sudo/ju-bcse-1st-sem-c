//Happy numbers 2.0
#include<stdio.h>
int main ()
{
    int n=0;
    
    int m=0;
    while(m<10)
    {
        int t=n;
        for(int i=0; i<100;i++)
        {
            int sum=0;
            while(t>0)
            {
                sum += t%10*(t%10);
                t /= 10;
            }
            t=sum;
            if(t ==1)
            {
                printf("%d is Happy no.\n", n);
                m++;
                break;
            }
        }
        n++;
    }
    
}