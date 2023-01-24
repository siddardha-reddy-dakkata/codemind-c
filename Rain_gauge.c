#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<3) printf("LIGHT
");
        else if(a[i]>=3 && a[i]<7) printf("MODERATE
");
        else if(a[i]>=7) printf("HEAVY
");
    }
}