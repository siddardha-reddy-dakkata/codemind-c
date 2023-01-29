#include<stdio.h>
int main()
{
    int count=0,a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        count=count+i;
    }
    printf("%d",count);
}