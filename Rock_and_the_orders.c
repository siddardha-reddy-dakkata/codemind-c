#include<stdio.h>
int main(){
    int c,d,a[3],b[3],i,asum=0,bsum=0;
    scanf("%d %d",&d,&c);
    
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
        asum+=a[i];
    }
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
        bsum+=b[i];
    }
    
    int wo_c=2*d,wi_c=c;
    if (asum<150){
        wi_c+=d;
    }
    if(bsum<150){
        wi_c+=d;
    }
    
    if(wi_c<wo_c){
        printf("YES");
    }
    else{
        printf("NO");
    }
}