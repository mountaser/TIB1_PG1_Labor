#include <stdio.h>
int main(int argc, char *argv[]) {
        int i = 0, sum = 0;
        while (i <= 3) {
            sum = sum + i;
            ++i;
        }
        printf("Resultat: %d", sum);
}