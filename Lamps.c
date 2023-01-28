#include<stdio.h>
int main()
{
    int n,k,x,y,c,r;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    r=k*x,n=n-k;
    if(x>y) c=n*y;
    else c=n*x;
    printf("%d",r+c);
}