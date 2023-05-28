#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double dur =0,sum = 0;
    int arr[4];
    
    for(int i = 0;i<4;i++){
        scanf("%d",&arr[i]);
        sum+= arr[i];
    }
    dur = sum/4;
    printf("Summe: %.0lf\n",sum);
    printf("Durchschnitt: %lf", dur);
    return 0;
}
