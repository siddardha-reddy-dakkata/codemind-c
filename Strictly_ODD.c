#include<stdio.h>
int main()
{
    int n,o=0,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(i%2==0)
        {
            if(a%2!=0)
            {
                o++;
            }
        }
    }
    if(o==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}