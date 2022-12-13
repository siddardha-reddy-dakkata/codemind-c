#include<stdio.h>
int main()
{ 
    int a,b,c,d,e,g;
    scanf("%d%d%d%d%d" ,&a,&b,&c,&d,&e);
    g=(a+b+c+d+e)/5;
    if(g>=90) printf("Grade A" );
    else if(g>=80 && g<90) printf("Grade B" );
    else if (g>=70 && g<80) printf("Grade C" );
    else if(g>=60 && g<70) printf("Grade D" );
    else if (g>=40 && g<60) printf("Grade E" ); 
    else if (g<40)printf("Grade F" );
    }