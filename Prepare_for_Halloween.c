#include<stdio.h>
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x*2>y*5)
        {
            printf("Chocolate
");
        }
        else if(x*2<y*5)
        {
            printf("Candy
");
        }
        else if(x*2==y*5)
        {
            printf("Either
");
        }
    }
}