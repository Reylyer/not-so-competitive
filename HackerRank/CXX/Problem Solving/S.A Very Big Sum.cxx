#include<stdio.h>

int main(){
    short l;
    long tot = 0;
    int temp;
    scanf("%hi", &l);
    for(; l > 0; l--){
        scanf("%i", &temp);
        tot += temp;
    }
    printf("%ld", tot);
}