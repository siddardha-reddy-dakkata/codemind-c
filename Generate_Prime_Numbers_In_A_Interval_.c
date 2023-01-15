#include<stdio.h>
int isprime(int i)
{
    int j,c=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0) c++;
    }
    if(c==2) return 1;
    else return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            printf("%d
",i);
        }
    }
}