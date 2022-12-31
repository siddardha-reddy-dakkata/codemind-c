#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("%d
",a/2);
        }
        else
        {
            printf("%d
",(a/2)+1);
        }
    }
}