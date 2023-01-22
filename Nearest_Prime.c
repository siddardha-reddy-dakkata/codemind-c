#include<stdio.h>
int prm(int n)
{
    int c=0,i;
    for(i=1;i<n+1;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,a,b,j,l,c,d;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&a);
        b=a;
        for(l=a;l>1;l--)
        {
            if(prm(l))
            {
                c=l;
                break;
            }
        }
        while(a)
        {
            if(prm(a))
            {
                d=a;
                break;
            }
            a++;
        }
        if((b-c)<=(d-b))
        {
            printf("%d
",c);
        }
        else
        {
            printf("%d
",d);
        }
    }
}