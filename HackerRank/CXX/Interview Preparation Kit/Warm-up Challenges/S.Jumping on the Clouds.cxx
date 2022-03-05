#include<stdio.h>

int main(){
    short n, i, step = 0, arc[100], temp, count = 0, streak = 0;
    scanf("%hi", &n);

    for(i = 0; i < n; i++){
        scanf("%hi", &temp);
        arc[i] = temp;
    }
    i = 0;
    while(i < n - 1){
        step++;
        if(arc[i+2] == 0){
            i+= 2;
        } else{
            i++;
        }
    }
    printf("%hi", step);
}