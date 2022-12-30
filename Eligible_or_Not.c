#include<stdio.h>
int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(z>=x && z<y) printf("YES
");
        else printf("NO
");
    }
}