#include<stdio.h>
int main()
{
    int a,i,d,sum=0,sqr=0,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sqr=sqr+(i*i);
        sum=sum+i;
    }
    b=sum*sum;
    d=b-sqr;
    printf("%d",d);
}