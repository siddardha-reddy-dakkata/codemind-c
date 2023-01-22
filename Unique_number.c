#include<stdio.h>
int main()
{
    int n,i,a[100]={0};
    scanf("%d",&n);
    while(n)
    {
        i=n%10;
        if(a[i]==1)
        {
            break;
        }
        else
        {
            a[i]=1;
        }
        n=n/10;
    }
    if(n)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}