#include<stdio.h>

int main(){
    short n, tot = 0, temp, ar[101] = {0};
    scanf("%hi", &n);
    for(; n > 0; n--){
        scanf("%hi", &temp);
        ar[temp - 1]++;
    }
    for(; n < 100; n++){
        tot += ar[n]/2;
    }
    printf("%hi", tot);
}