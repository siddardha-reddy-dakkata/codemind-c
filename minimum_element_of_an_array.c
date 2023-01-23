#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<m)
        {
            m=i;
        }
    }
    printf("%d",m);
}