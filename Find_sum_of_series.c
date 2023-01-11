#include<stdio.h>
int main()
{
    float a,c=0,i;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        c=c+(1/i);
    }
    printf("%.2f",c);
}