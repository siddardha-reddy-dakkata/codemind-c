#include<stdio.h>
int main()
{
    int n,i,j,r,p=0,temp=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        p=0;
        for(j=a[i];a[i]!=0;a[i]=a[i]/10)
        {
            r=a[i]%10;
            p=p*10+r;
        }
        if(p==temp)
        {
            c++;
        }
    }
    if(c==n) printf("1");
    else printf("0");
}