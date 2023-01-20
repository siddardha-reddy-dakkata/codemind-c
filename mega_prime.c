#include<stdio.h>
int prime(int i)
{
    int j,c=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==2) return 1;
    else return 0;
}
int main()
{
    int a,prm=0,e=0,d=0,i,r;   
    scanf("%d",&a);
    if(prime(a)) prm++;
    for(i=a;a!=0;a=a/10)
    {
        r=a%10;
        if(prime(r))
        {
            d++;
        }
        e++;
    }
    if(prm==1 && d==e)
    {
        printf("Mega Prime");
    }
    else printf("Not Mega Prime");
    
}