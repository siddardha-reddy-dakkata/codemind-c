#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a,b;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b) printf("LOSS
");
        else if(a<b) printf("PROFIT
");
        else printf("NEUTRAL
");
    }
}