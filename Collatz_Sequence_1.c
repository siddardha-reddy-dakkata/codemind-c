#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    printf("%d ",a);
    for(i=a;a!=1 && i!=1;)
    {
        if(i%2==0)
        {
            printf("%d ",i/2);
            i=i/2;
            if(i==1)
            break;
        }
        else if(i%2!=0)
        {
            printf("%d ",(3*i)+1);
            i=(3*i)+1;
            if(i==1)
            break;
        }
    }
}