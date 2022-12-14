#include<stdio.h>
int main(){ 
    int c;
    scanf("%d",&c); 
    if(c==1) printf("monday"); 
    else if(c==2) printf("tuesday"); 
    else if(c==3) printf("wednesday");
    else if(c==4) printf("thursday");
    else if(c==5) printf("friday"); 
    else if(c==6) printf("saturday");
    else if(c==7) printf("sunday");
    else printf("invalid input");}