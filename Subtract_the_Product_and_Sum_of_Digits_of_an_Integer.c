#include<stdio.h>
int main(){int b,a,i,rem,sum=0,pro=1,req;b=a;scanf("%d",&a);for(i=a;a!=0;a=a/10){rem=a%10;sum=sum+rem;pro=pro*rem;}req=pro-sum;printf("%d",req);}