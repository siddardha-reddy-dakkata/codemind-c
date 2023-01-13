#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,z,y,ans;
    scanf("%d",&a);
    n=log10(a);
    b=a%10;
    c=a/(pow(10,n));
    y=c*pow(10,n);
    z=b*pow(10,n);
    ans=a-y+z-b+c;
    printf("%d",ans);
}