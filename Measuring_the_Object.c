#include<stdio.h>
int main()
{
    int w,a,b,c;
    scanf("%d%d%d%d",&w,&a,&b,&c);
    if(w==a || w==b|| w==c|| w==a+b||w==a+c|| w==b+c||w==a+b+c)
    printf("YES");
    else
    printf("NO");
}