#include<stdio.h>
int main(){int l,b,w,c,oa,ia,e;int cost;scanf("%d%d%d%d",&l,&b,&w,&c);oa=(l+(2*w))*(b+(2*w));ia=l*b;e=oa-ia;cost=e*c;printf("%d",cost);}