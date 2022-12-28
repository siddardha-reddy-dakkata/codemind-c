#include<stdio.h>
int main()
{
    int a,c=0,d=0;
    scanf("%d",&a);
    int i,j;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                d=d+1;
            }
        }
    }
    printf("%d",d);
}