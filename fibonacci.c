#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
}