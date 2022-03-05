#include<stdio.h>

int main(){
    short i, j, n;
    scanf("%hi", &n);
    for(i = n; i > 0; i--){
        for(j = 0; j < n; j++){
            if(j > i - 2){
                printf("#");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}