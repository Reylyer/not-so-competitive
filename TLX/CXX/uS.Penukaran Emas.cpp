#include<stdio.h>

int main(){
    unsigned short N;
    scanf("%hu", &N);
    printf("%hu", (short int)(N/12)*13 + ((N%12)/4)*4 + (N%4)/2 + (N%4)/3 + (N%4)/4);
}
// 1 -> 0
// 2 -> 1
// 3 -> 2
// 4 -> 4
// 5 -> 4
// 6 -> 6
// 7 -> 6
// 8 -> 8