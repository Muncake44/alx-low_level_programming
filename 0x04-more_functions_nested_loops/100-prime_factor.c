#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 612852475143;
	int i;
	for (i = 2; i <= n; i++) {
	while (n % i == 0) {
	n = n / i;
	}
	}
	printf("%d\n", n);
	return 0;
}
