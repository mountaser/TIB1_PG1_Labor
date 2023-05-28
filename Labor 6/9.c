#include <stdio.h>

float celsius(float f) {
    float c = 5 * (f - 32) / 9;

    return c;
}

int main() {
    printf("%dF = %.1fC", 20, celsius(20));
    return 0;
}
