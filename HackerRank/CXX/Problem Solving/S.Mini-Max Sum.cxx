#include<stdio.h>

int main(){
    long temp, min, max, sum;
    short n = 5;
    scanf("%ld", &temp);
    min = temp;
    max = temp;
    sum = temp;
    for(; n > 1; n--){
        scanf("%ld", &temp);
        if(min > temp){
            min = temp;
        }
        if(max < temp){
            max = temp;
        }
        sum += temp;
    }
    printf("%ld %ld", sum - max, sum - min);
}