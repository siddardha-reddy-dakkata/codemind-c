#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,i,c;
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
}