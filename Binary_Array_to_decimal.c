#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    int ans = 0, c = n-1;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            ans = ans + pow(2,c);
        }
        c--;
    }
    printf("%d",ans);
}