#include<stdio.h>
int main(){int a,i,r,b,req=0;scanf("%d",&a);for(i=a;a!=0;a=a/10){r=a%10;req=req*10 + r;}printf("%d",req);}