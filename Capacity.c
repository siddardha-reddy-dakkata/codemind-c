#include<stdio.h>
int main()
{ 
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=(2*a*b*c*512)/1024;
    printf("%d",d);
    printf("kb");
}