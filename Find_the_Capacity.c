#include<stdio.h>
int main()
{
    int i,a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%dKB",a[0]*a[1]*a[2]);
}