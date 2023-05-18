#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]==0){
            c++;
        }
    }
    for(i=0;i<n;i++){
        if(i<c){
            printf("0 ");
        }
        else{
            printf("1 ");
        }
    }
}