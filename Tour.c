#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,i;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d
",a*5+b*7);
    }
}