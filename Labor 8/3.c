#include <stdio.h>

int faculty(int n) {
    int res;
    if(n==0){
        return 1;
    }
    else{
        res = n * faculty(n-1);
    }
    return res;
    
}
int input() {
    int n;
    scanf("%d", &n);
    return n;
}
int main() {
    printf("%d! = %d ", input(), faculty(input()));
    return 0;
}