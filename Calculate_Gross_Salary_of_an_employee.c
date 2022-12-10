#include<stdio.h>
int main()
{ 
    float a,b,c,pf,gr;
    scanf("%f%f%f",&a,&b,&c);
    pf=a*0.12;
    gr=a+b+c+pf;
    printf("%.2f
",pf);
    printf("%.2f",gr);
    
}