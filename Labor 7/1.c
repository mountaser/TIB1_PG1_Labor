#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int minimum(int n[], int l){
    int min = n[0];
    for(int i = 0;i < l; i++){
        if(n[i] < min){
            
            min = n[i];
            
        }
    }
    return min;
}

int main(){
    int numbers[] = {4, 6, 9, 5};
    printf("%d", minimum(numbers, 4));
}