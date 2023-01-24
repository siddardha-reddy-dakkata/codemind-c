#include<stdio.h>
int main()
{
    long int a,r,b,rem,ans=0;
    int i;
    scanf("%ld",&a);
    r=a%1000;
    b=a/1000;
    for(i=r;r!=0;r=r/10)
    {
        rem=r%10;
        ans=ans*10+rem;
    }
    printf("%ld",(b*1000)+ans);
}