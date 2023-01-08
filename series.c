#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=2,i;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
            a=(a*2)+1;
        }
        else
        {
            printf("%d ",b);
            b=(b*3)+2;
        }
    }
}