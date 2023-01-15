#include<stdio.h>
int main()
{
    int l,w,h,i,d;
    scanf("%d",&l);
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<l || h<l) printf("UPLOAD ANOTHER
");
        else
        {
            if(w==h) printf("ACCEPTED
");
            else printf("CROP IT
");
        }
    }
}