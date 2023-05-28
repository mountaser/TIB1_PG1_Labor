#include <stdio.h>

int stringlength(char a[]) {
    int counter =0;
    for(int i =0; a[i] != '\0';i++){
        counter++;
    }
    return counter;
}

int main() {
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));
    return 0;
}