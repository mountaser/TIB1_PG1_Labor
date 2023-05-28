#include <stdio.h>

int potenz_iter(int a, int b, int n) {
    int res;
    if(n==0){
        return (1);
    }
    else {
        res = (a+b) * potenz_iter(a,b,n-1);
    }
    return res;
    
}

int main() {
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);
    printf("%d", potenz_iter(a, b, n));
    return 0;
}