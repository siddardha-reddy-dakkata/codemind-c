#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        flag=1;
    }
    if(n%5==0)
    {
        printf("Plang");
        flag=1;
    }
    if(n%7==0)
    {
        printf("Plong");
        flag=1;
    }
    if(flag==0) printf("%d",n);
}