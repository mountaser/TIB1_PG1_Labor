#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  
// Sie schreiben nur die Funktion, keine Ausgabe!
void ownStrcpy(char *a,  char *b){
    for(int i; b[i]!='\0'; i++){
    a[i] = b[i];
    }
}  

int main(){
    char originalString[] = "Programmieren";
    char copiedString[40];
    ownStrcpy(copiedString, originalString);
    printf("%s = %s", originalString, copiedString);   
}