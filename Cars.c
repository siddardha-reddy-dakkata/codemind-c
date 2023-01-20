#include<stdio.h>
int main()
{
    int b,a;
    scanf("%d",&a);
    if(a>=4)
    {
        if(a%4==0)
        {
            b=a/4;
            printf("%d",b);
        }
        else if(a%4>0)
        {
            b=(a/4) + 1;
            printf("%d",b);
        }
    }
    else
    {
        printf("1");
    }
}