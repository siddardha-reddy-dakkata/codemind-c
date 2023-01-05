#include<stdio.h>
int main()
{
    int j,a,i;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=a;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}