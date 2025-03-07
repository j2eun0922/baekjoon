#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n, sum =0;
	char c[101];

	scanf("%d", &n);
	scanf("%s", c);

	for (int i = 0; i < n; i++) {
		sum += c[i] - '0';
	}

	printf("%d", sum);
}