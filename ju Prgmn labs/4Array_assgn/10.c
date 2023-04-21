#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter  size of  array: ");
    scanf("%d",&n);
    float a[n],temp,sum=0,mean,sd;
    int i;
    printf("Input:\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    mean=sum/n;
    for(i=0,sum=0;i<n;i++){
        temp=a[i]-mean;
        temp=temp*temp;
        sum=sum+temp;
    }
   
    printf("The standard deviation of the array is %.3f\n",sqrt(sum/n));
    return 0;
}