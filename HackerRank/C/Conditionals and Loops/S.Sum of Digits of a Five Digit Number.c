#include <stdio.h>

int main(){
    int n, sumOfDigit = 0;
    scanf("%d", &n);
    for(int i = 0; i < 5; i++){
        sumOfDigit += n % 10;
        n /= 10;
    }
    printf("%d", sumOfDigit);
    return 0;
}