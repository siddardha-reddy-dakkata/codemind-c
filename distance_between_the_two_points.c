#include<stdio.h>
#include<math.h>
int main()
{ 
    int a,b,c,d;
    float e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=sqrt(pow(a-c,2)+pow(b-d,2));
    printf("%.4f",e);
}