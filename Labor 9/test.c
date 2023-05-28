#include <stdio.h>

int weight(unsigned char x){
    int y = x;
    int bin[8], i;
    while(y > 0){
        bin[i] = y % 2;
        y = y/2;
        i++;
    printf("%d", bin[i]);
    }
    
    return i;
}

int main(){
    unsigned char x = 23;

    printf(" %d ", weight(x));
    return 0;
 }