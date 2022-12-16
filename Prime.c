#include<stdio.h>
int main(){
    int i,a,count=0;
    scanf("%d",&a); 
    for(i=1;i<=a;i++)
    {
        if(a%i==0) 
        count++; 
        
    } if (count==2)
    {
        printf("Prime");
    }
    else printf("Not Prime");
}