#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f,l,c,d=1;
    for(i=0;i<n;i++)
    {
        d=1;
        scanf("%d",&a[i]);
        c=log10(a[i])+1;
        l=(a[i]%10);
        for(j=1;j<c;j++)
        {
            d=d*10;
        }
        f=a[i]/d;
        printf("%d
",l+f);
    }
    
}