#include<stdio.h>
int main()
{
    int n,t,c=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        c=c+1;
        else 
        {
            c=c+2;
        }
    }
    printf("%d",c);
}