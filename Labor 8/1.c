#include <stdio.h>
int potenz_iter(int a, int b, int n) {
    if(n==0){
        return 1;
    }
    else{
    int res =(a+b)  ;
    for(int i =1; i< n; i++){
        res *= (a+b);
    }
    return res;
    }
}

int main() {
    int a,b,n;
    scanf("%d %d %d ", &a, &b, &n);
    printf("%d", potenz_iter(a, b, n));
    return 0;
}