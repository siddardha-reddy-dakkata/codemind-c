#include<stdio.h>
int main(){ int a,i,b,r,c=0; scanf("%d",&a); b=a*a; for(i=b;b!=0;b=b/10) { r=b%10; c=c+r; } if(c==a) printf("Neon Number"); else printf("Not Neon Number");}