#include<stdio.h>
int main()
{
    long long int a,i,c=0;;
    scanf("%lld",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        c=c+n[i];
    }
    printf("%lld",c);
}