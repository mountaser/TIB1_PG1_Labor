#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *numbers;
    scanf("%d", &n);
    numbers = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%3d: %3d", i + 1, numbers[i]);
    }
    return 0;
}