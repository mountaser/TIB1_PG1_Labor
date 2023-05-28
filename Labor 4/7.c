#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char let[40]= "\0";
    char out[40]= "\0";
    scanf("%s", let); 
    int j = 0;
    for(int i = 39; i >= 0;i--){
        if(let[i]!='\0'){
        out[j]= let[i];
        j++;
        }

    }
    printf("%s\n",out);
    return 0;
}