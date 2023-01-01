#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    if(a>=1000000000 && a<=9999999999) printf("Valid");
    else printf("Invalid");
}