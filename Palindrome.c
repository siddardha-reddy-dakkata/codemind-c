#include <stdio.h>
int main()
{ 
    int n, reversed = 0, remainder, original; 
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10; 
        reversed = reversed * 10 + remainder; n /= 10; }
        if (original == reversed) printf("Palindrome"); 
        else printf("Not Palindrome"); return 0;}