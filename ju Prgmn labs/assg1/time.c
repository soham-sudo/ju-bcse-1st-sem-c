#include<stdio.h>
int main()
{
int t,s, h, m;
printf("time: ");
scanf("%d",&t);
s = t%60;
t = t/60;
m = t%60;
t= t/60;
h = t;
printf("%d hour, %d min, %d sec ", h, m, s);
}
