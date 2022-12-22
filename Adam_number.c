
#include<stdio.h>
int main()
{
    int i,a,sq1,sq2,ans1=0,ans2=0,r1,r2;
    scanf("%d",&a);
    sq1=a*a;
    for(i=a;a!=0;a=a/10)
    {
        r1=a%10;
        ans1=ans1*10 + r1;
    }
    sq2=ans1*ans1;
    for(i=sq2;sq2!=0;sq2=sq2/10)
    {
        r2=sq2%10;
        ans2=ans2*10 + r2;
    }
    if(sq1==ans2) printf("True");
    else printf("False");
}