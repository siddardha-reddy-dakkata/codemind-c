#include<stdio.h>
int main()
{ 
    int a; 
    scanf("%d",&a);
    float da,hr,tb;
    if(a<=10000)
    { 
        da=a*0.80; hr=a*0.20;
        }
        else if(a>10000 && a<=20000)
        { 
            da=a*0.90; hr=a*0.25; 
            
        }
        else if(a>20000)
        {
            da=a*0.95; hr=a*0.30;
            } 
            tb=a+da+hr;
            printf("%.2f",tb);}