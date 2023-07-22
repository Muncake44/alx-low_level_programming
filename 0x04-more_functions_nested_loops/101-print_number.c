#include <stdio.h>

void print_number(int n) {
	if (n == 0) {
	putchar('0');
	} else if (n < 0) {
	putchar('-');
	n = -n;
	}
	while (n > 0) {
	putchar((n % 10) + '0');
	n = n / 10;
	}
}
