#include<stdio.h>
int main()
{
    int r,c,max1=0,max2=0;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,sum1=0,sum2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum1=0;
        for(j=0;j<c;j++)
        {
            sum1+=a[i][j];
        }
        if(sum1>max1) max1=sum1;

    }
    for(i=0;i<c;i++)
    {
        sum2=0;
        for(j=0;j<r;j++)
        {
            sum2+=a[j][i];
            if(sum2>max2) max2=sum2;
        }
    }
    if(max1>max2) printf("%d",max1);
    else printf("%d",max2);
}