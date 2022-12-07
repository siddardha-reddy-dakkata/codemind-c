#include<stdio.h>
int main()
{ 
    int a;
    scanf("%d",&a);
    a=a%3;
    if(a==0)
    { 
        printf("NORMAL");
    }
    else if(a==1)
    { 
        printf("HUGE");
    }
    else{ printf("SMALL");
    }
    
}