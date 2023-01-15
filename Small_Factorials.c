#include<stdio.h>
int main()
{
    int n,i,j,f=1,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}