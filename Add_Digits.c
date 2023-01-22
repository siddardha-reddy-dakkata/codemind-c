#include<stdio.h>
int main()
{
    int n,d,sum=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum+=d;
        n=n/10;
        if(n==0 && sum>9)
        {
            n=sum;
            sum=0;
        }
    }
    printf("%d",sum);
}