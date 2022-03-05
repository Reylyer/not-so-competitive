#include<stdio.h>

int main(){
    short n, i, j, ddif = 0, temp;
    scanf("%hi", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%hi", &temp);
            if(i == j){
                ddif += temp;
            }
            if(i == n - j - 1){
                ddif -= temp;
            }
        }
    }
    if(ddif < 0){
        ddif*= -1;
    }
    printf("%hi", ddif);
}