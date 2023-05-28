#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int m, n;

	scanf("%i %i",&m, &n);
	for (int j = m; j > 0; j--) {
		for (int i = n; i > 0; i--) {
				printf("*");
		}
		printf("\n");

	}

	return 0;
}
