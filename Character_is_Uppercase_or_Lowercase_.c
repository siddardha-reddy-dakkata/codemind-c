#include<stdio.h>
int main()
{ 
    char z;
    scanf("%c",&z);
    if (z>='A' && z<='Z')
    printf("uppercase alphabet");
    else if (z>='a' && z<='z')
    printf("lowercase alphabet");
    else printf("not an alphabet");}