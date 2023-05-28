#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	scanf("%i", &n);

	for (int i = n; i > 0; i--) {
		if (i % 2 == 0) {
			printf("_");
		}
		else
		printf("*");
	}
	return 0;
}
