#include<stdio.h>
int main()
{
    int z;
    scanf("%d",&z);
    int y[100],i;
    int a=0,b=1,d=0,c=0;
    for(i=0;i<100;i++)
    {
        c=a+b;
        y[i]=a;
        a=b;
        b=c;
    }
    for(i=0;i<100;i++)
    {
        if(z==y[i])
        {
            d++;
        }
    }
    if(d>=1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}