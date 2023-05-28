#include <stdio.h>

float triangleArea(float a, float b) {
    float resault = (a*b) /2;

    return resault;
}

int main() {
    printf("%.2f", triangleArea(3, 4));
    return 0;
}
