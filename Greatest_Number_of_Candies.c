#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],b,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            printf("True ");
        }
        else if((a[i]+b)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}