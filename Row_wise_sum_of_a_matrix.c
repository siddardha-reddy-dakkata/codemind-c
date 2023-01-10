#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            c+=a[i][j];
        }
        printf("%d ",c);
    }
}