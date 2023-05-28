#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *toUpper(char a[]){
    for(int i = 0; a[i]!='\0' ; i++){

        if(a[i]>='a' && a[i]<='z'){
           a[i] = a[i] -32;
        }
    }
    return a;
}  

int main(){
    char arr[] = "Hallo Welt";
    toUpper(arr);
    printf("%s\n", arr);    
}