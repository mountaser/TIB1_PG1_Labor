#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char let[40];
    int counter = 0;
    scanf("%s", let); 
    //printf("%s", let);

    for(int i = 0; i < 40;i++){

        if(let[i]>='a' && let[i]<='z' && let[i]!='\0'){
            counter++;
            
            printf("%s, %d ",let[i], counter);
        }
    }
    printf("%d Kleinbuchstaben\n",counter);
    return 0;
}