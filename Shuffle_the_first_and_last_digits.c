#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,z,y,sa;
    scanf("%d",&a);
    b=a%10;
    n=log10(a);
    c=a/(pow(10,n));
    y=c*pow(10,n);
    z=b*pow(10,n);
    sa=a-y+z-b+c;
    printf("%d",sa);
}