#include<stdio.h>
int main()
{
    int i,a,b,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0 && i%2==0)
        {c=c+1;}}
        printf("%d",c);}