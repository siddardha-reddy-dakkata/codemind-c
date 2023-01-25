#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,m=n;
    for(i=n+64;i>=65;i--)
    {
        for(j=m;j>=1;j--)
        {
            printf("%c ",i);
        }
        m--;
        printf("
");
    }
}