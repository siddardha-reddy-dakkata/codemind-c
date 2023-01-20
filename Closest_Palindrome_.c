#include<stdio.h>
int pal(int i)
{
    int j,r,rev=0,temp;
    temp=i;
    for(j=i;i!=0;i/=10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==temp) return 1;
    else return 0;
}
int main()
{
    int n,i,f=0,f1=0,c=0,d=0;
    scanf("%d",&n);
    for(i=n+1;i>n;i++)
    {
        c++;
        if(pal(i))
        {
            f=i;
            break;
        }
    }
    for(i=n-1;i!=0;i--)
    {
        d++;
        if(pal(i))
        {
            f1=i;
            break;
        }
    }
    if(d==c) printf("%d %d",f1,f);
    else if(d<c) printf("%d",f1);
    else printf("%d",f);
}