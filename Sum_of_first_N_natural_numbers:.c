#include<stdio.h>
int main()
{ 
    int i,a;
    scanf("%d",&a);
    int count=0;
    for (i=0;i<=a;i++)
    { 
        count=count+i;
    }
    printf("%d",count);
}