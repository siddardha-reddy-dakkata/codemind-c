#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b;
    if(n%2==0) b=n/2;
    else b=(n/2)+1;
    int a[n],i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>b;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<=b;i++)
    {
        printf("%d ",a[i]);
    }
}