#include<stdio.h>
int pal(int i)
{
    int j,r,rev=0,temp;
    temp=i;
    for(j=i;i!=0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
    }
}
