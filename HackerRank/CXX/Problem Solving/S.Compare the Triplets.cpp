#include<stdio.h>

int main(){
    short t, base[3];
    short a = 0, b = 0;
    for(short i = 0; i < 3; i++){
        scanf("%hi", &t);
        base[i] = t;
    }
    for(short i = 0; i < 3; i++){
        scanf("%hi", &t);
        if(t < base[i]){
            a++;
        } else if (t > base[i]){
            b++;
        }
    }
    printf("%hi %hi\n", a, b);
    
}