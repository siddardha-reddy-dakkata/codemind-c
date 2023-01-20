#include<stdio.h>
int prime(int i)
{
    int j,c=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        c++;
    }
    if(c==2) return 1;
    else return 0;
}
int main()
{
    int n,c=0,d=0,i;
    scanf("%d",&n);
    for(i=n;i>n-1;i++)
    {
        c++;
        if(prime(i))
        {
            break;
        }
    }
    for(i=n;i!=0;i--)
    {
        d++;
        if(prime(i))
        {
            break;
        }
    }
    if(c<d) printf("%d",c-1);
    else printf("%d",d-1);
}