#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    double numbers[4];
    int index;
    for(int j = 0; j < 4 ;j++){
        scanf("%lf", &numbers[j]);
    }
    double min = numbers[0];

    for(int i = 0;i < 4; i++){
        if(numbers[i] < min){
            
            min = numbers[i];
            index = i;
        }
    }

    printf("Kleinste Zahl: %.1lf an Index %d \n", min, index);
    
    return 0;
}