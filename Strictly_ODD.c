#include<stdio.h>
int main()
{
    int n,i,flag;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            if(a[i]%2!=0)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}