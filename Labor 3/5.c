#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int m, n;

	scanf("%i %i", &m, &n);


	for (int j = 0; j < m; j++) {
		if (j % 2 != 0) {
			for (int i = 0; i < n; i++) {
				if (i % 2 != 0) {
					printf("+");
				}
				else				
				printf("-");

			}
		}
		else
			for (int k = 0; k < n; k++) {
				if (k % 2 != 0) {
					printf("-");
				}
				else
					printf("+");

			}
		printf("\n");

	}

	return 0;
}
