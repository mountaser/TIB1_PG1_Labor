#include <stdio.h>
#include <stdbool.h>

int weekday(int d, int m, int year) {
    int c = year / 100;
    int y = year % 100;
    bool sw;
    if(m == 1 || m==2){
        sw=true;
    }
    if(y == 00 && sw == true){
        c--;
    }
    if(sw){
        y--;
    }
    if(m > 2){
        m -=2;
    }
    else m += 10;

   int temp = (d + (2.6 *m - 0.2) + y + (y/4) + (c/4) - 2*c);
   int res = temp % 7;

   return res; 

}


int main() {
    printf("%d", weekday(17, 01, 1993));

    return 0;
}
