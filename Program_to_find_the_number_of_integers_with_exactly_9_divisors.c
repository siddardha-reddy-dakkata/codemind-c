#include<stdio.h>
int main()
{
    int a,i,j,total=0,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            total++;
        }
    }
    printf("
Total=%d",total);
}