#include<stdio.h>
int main()
{
    int n,i,a=11,b=22,c=100;
    scanf("%d",&n);
    printf("3 -2 5 2 ");
    for(i=5;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",a);
            a=(a*3)-4;
        }
        else
        {
            printf("%d ",b);
            b=b+c;
            c=c*5;
        }
    }
}