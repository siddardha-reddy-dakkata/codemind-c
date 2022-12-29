#include<stdio.h>
int main()
{
    int n,i,a=1,b=1;
    scanf("%d",&n);
    printf("0 ");
    printf("%d %d ",a,b);
    for(i=4;i<=n;i++)
    {
        if(i%2==0)
        {
            a=a*3;
            printf("%d ",a);
        }
        else
        {
            b=b*2;
            printf("%d ",b);
        }
    }
}