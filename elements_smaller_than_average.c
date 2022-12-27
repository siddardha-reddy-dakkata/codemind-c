#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    float avg=(float)s/n;
    for(i=0;i<n;i++)
    {
        if(avg>=a[i])
        {
           c++;
        }
    }
    printf("%d",c);
}