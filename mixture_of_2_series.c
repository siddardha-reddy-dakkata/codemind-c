#include<stdio.h>
int main()
{
    int n,a=0,b=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
            a=a+2;
        }
        else
        {
            printf("%d ",b);
            b=b+1;
        }
    }
}