#include<stdio.h>
int pal(int i)
{
    int j,temp,rev=0,r;
    temp=i;
    for(j=i;i!=0;i/=10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    if(temp==rev) return 1;
    else return 0;
}
int rev(int n)
{
    int k,y,ans=0;
    for(k=n;n!=0;n/=10)
    {
        y=n%10;
        ans=ans*10+y;
    }
    return ans;
}
int fun(int i)
{
    i=i+rev(i);
    if(pal(i))
    {
        printf("%d",i);
        return 0;
    }
    else 
    {
        fun(i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}