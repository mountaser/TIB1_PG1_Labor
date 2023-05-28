#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    double num[10];
    double sum = 0, dur;
    int count = 0;
   for(int j = 0; j < 10 ;j++){
        scanf("%lf", &num[j]);

        if(num[j] == 0 ){
            j=10;
        }
        else{
            count++;
        } 
    } 
    for(int i = 0; i < count ;i++){

        sum = sum + num[i];
    }
   if (num[0] == 0){
        dur = 0;
    }
    else{
        dur = sum / count;
    }

    printf("Durchschnitt (N=%d): %3.2lf\n", count, dur);
    return 0;
}