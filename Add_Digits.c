#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n>9){
        int ans=0,rem;
        while(n){
            rem=n%10;
            ans+=rem;
            n/=10;
        }
        n=ans;
    }
    printf("%d",n);
}