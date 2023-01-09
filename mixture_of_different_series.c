#include<stdio.h>
int main()
{
    int n,i,a=2,b=1;
    scanf("%d",&n);
    printf("0 0 ");
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
            a=(a*3)+2;
        }
        else
        {
            printf("%d ",b);
            b=(b*2)+1;
        }
    }
}