#include<stdio.h>
int main(){
    int i,c=0,a; 
    scanf("%d",&a);
    for(i=1;i<a;i++) 
    {
        if(a%i==0) c=c+i; } 
        printf("%d",c);}