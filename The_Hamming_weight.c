#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }
    printf("%d",c);
}