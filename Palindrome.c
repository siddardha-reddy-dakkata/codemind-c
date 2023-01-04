#include<stdio.h>
int main()
{
    int n,i,temp,rev=0,r;
    scanf("%d",&n);
    temp=n;
    for(i=n;n!=0;n=n/10)
    {
        r=n%10;
        rev=rev*10 + r;
    }
    if(rev==temp) printf("True");
    else printf("False");
}