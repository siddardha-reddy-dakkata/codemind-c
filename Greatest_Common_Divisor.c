#include<stdio.h>
int main(){int a,b,i,c;scanf("%d%d",&a,&b);for(i=1;i<=b;i++){if(a%i==0 && b%i==0){c=i;}}printf("%d",c);}