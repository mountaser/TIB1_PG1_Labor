#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char let[40]= "\0";
    int counter = 0;
    scanf("%s", let); 

    for(int i = 0; i < 40;i++){

        if(let[i]=='a' || let[i]=='i' || let[i]=='o' || let[i]=='u' || let[i]=='e' || let[i]=='A' || let[i]=='I' || let[i]=='O' || let[i]=='U' || let[i]=='E'){
            counter++;
        }
    }
    printf("%d Vokale\n",counter);
    return 0;
}