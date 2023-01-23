#include<stdio.h>
int main()
{
    int i,n;
    float m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=m+a[i];
    }
    float s=m/n;
    printf("%.2f",s);
}