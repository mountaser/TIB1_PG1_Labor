#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  
// Sie schreiben nur die Funktion, keine Ausgabe!
void append(char *a,  char b[]){
    char total[40]="\0";
    int counter =0, i, j, k;
    for(i =0; a[i]!='\0'; i++){
    total[i] = a[i];
    }
    counter= i;
    for(j =0; b[j]!='\0'; j++){
    total[counter] = b[j];
    counter++;
    }
    for(k =0; k < counter; k++){
    a[k] = total[k];
    }
}

int main(){
    char buffer[40] = "Hallo ";
    char b2[] = "Esslingen!";
    append(buffer, b2);
    printf("%s\n", buffer);  
}