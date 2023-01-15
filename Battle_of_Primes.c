#include<stdio.h>
int prm(int i)
{
    int j,count=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,c,d,e,i;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=1;i!=0;i++)
    {
        if(prm(c+i))
        {
            printf("%d",i);
            break;
        }
    }
}