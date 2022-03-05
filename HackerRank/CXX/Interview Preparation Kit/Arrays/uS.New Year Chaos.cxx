#include<stdio.h>
#include<stdlib.h>

int main(){
    short t;
    long bribe;
    long n, i, arrN[100000];
    bool chaotic = false;
    scanf("%hi", &t);
    for(; t > 0; t--){
        bribe = 0;
        scanf("%li", &n);
        for(i = 0; i < n; i++){
            scanf("%li", &arrN[i]);
            printf("%li\n", arrN[i] - i);
            if(arrN[i] - i > 3){
                printf("Too chaotic\n");
                chaotic = true;
            } else if (arrN[i] - i > 1){
                bribe += abs(arrN[i] - i) - 1;
            }
        }
        if(!chaotic){
            printf("%li\n", bribe);
        }
        chaotic = false;
    }
}
