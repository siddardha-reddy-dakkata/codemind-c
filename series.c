#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a=1,b=3;
    printf("0 1 ");
    for(i=2;i<n;i++)
    {
        if(i%2==0)
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