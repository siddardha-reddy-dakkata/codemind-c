#include<stdio.h>
int main()
{
    int n,r,a,b,i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            r=j%10;
            if(r==2 || r==3 || r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}