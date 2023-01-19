#include<stdio.h>
int pal(int i)
{
    int r,j,rev=0,temp;
    temp=i;
    for(j=i;i!=0;i/=10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    if(temp==rev) return 1;
    else return 0;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(pal(a[i])) printf("True
");
        else printf("False
");
    }
}