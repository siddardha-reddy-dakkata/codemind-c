#include<stdio.h>
int main()
{
    int n,a=4,b=1,i;
    scanf("%d",&n);
    printf("2 0 ");
    for(i=3;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",a);
            a=a*2;
        }
        else
        {
            printf("%d ",b);
            b=b*3;
        }
    }
}