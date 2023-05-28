#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char let[40]= "\0";
    char out[40]= "\0";
    int s,e;
    scanf("%s %s %e", let, &s, &e); 
    int j = 0;
    for(int i = s; i < e;i++){

        let[i] = out[j]
        j++;
    }
    printf("%s\n", let);
    return 0;
}