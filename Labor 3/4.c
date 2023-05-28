#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int m;
	scanf("%i" ,&m);
	int n = m;
	for (int j = m; j > 0; j--) {
		if (j == 1 || j == m) {
			for (int i = n; i > 0; i--) {
				printf("*");
			}
		}
		else
			for (int k = n; k > 0; k--) {
				if (k == 1 || k == n || k == j || i == j )
					printf("*");
				else 
					printf(" ");
			}
		
		printf("\n");
	}

	return 0;
}
