#include<stdio.h>
int main()
{
    int a,s,i;
    scanf("%d%d",&a,&s);
    for(i=1;i<=s;i++)
    {
        if((a*i)%s==0)
        {
        printf("%d ",a*i);
        break;
        }
    }
}
