#include<stdio.h>
#include<math.h>
int main(){int a,r,i,o=0,e=0,n=0;scanf("%d",&a);if(a==0){n=1;}else{n=log10(a)+1;}for(i=a;a!=0;a=a/10){r=a%10;if(r%2==0)e++;else o++;}if(e==n) printf("Even");else if(o==n) printf("Odd");else printf("Mixed");}