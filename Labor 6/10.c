#include <stdio.h>
#include <stdbool.h>

float prime(int p) {

    bool x = false;
    if(p == 1 || p == 0){
        x = false;
    }
    else if(p == 2){
        x = true;
    }
    else if( p % 2 !=0 && p % 3 !=0 && p % 5 !=0 && p % 7 !=0){
        x = true;
    }
    return x;
}


int main() {
    printf(prime(11) ? "Primzahl" : "KEINE Primzahl");
    return 0;
}
