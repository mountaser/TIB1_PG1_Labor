#include <stdio.h>

float bmi(float whight, float hight) {
    hight = hight/100;
    float resault = whight/(hight*hight);

    return resault;
}

int main() {
    printf("%dkg und %fm = %.2lf", 85, 1.5, bmi(85, 150));
    return 0;
}
