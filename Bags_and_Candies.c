#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    if(a%d==0)
    {
        printf("%d",a/d);
    }
    else if(a%d!=0)
    {
        printf("%d",(a/d)+1);
    }
    return 0;
}