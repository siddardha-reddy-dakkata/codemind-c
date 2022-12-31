#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d,l,r,i;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&d,&l,&r);
        if(d>=l && d<=r) printf("Take second dose now
");
        else if(d<l) printf("Too Early
");
        else printf("Too Late
");
    }
}