#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==1) s+=a[i];
    }
    printf("%d",s);
}