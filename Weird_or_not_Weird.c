#include<stdio.h>
int main()
{ 
    int a;
    scanf("%d",&a);
    if (a%2==1) printf("weird");
    else if(a%2==0 && a>1 && a<6) printf("not weird");
    else if(a%2==0 && a>5 &&a<21) printf("weird");
    else if(a%2==0 && a>20) printf("not weird");}