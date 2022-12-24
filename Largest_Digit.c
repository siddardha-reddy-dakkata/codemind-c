#include <stdio.h>
int main() {int num, large = 0, rem = 0;scanf("%d", &num);while (num > 0) {rem = num % 10;if (rem > large) {large = rem;}num = num / 10;}printf( "%d
", large);return 0;}