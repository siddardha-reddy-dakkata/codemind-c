#include<stdio.h>
int main()
{
    int i,a[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++)
    {
        if(a[i]==-1)
        {
            break;
        }
        else
        {
            printf("%d
",a[i]*a[i]);
        }
    }
}