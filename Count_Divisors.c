#include<stdio.h>
int main()
{
    int i,n,c=0,m,b;
    scanf("%d%d%d",&n,&m,&b);
    for(i=n;i<=m;i++)
    {
        if(i%b==0)c++;
    }
    printf("%d",c);
}