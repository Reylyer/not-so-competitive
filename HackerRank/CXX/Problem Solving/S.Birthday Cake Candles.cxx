#include<stdio.h>

int main(){
    unsigned int n, tallest, count = 1, temp;
    scanf("%i", &n);
    scanf("%i", &temp);
    tallest = temp;
    for(; n > 1; n--){
        scanf("%i", &temp);
        if(temp > tallest){
            tallest = temp;
            count = 1;
        } else if (temp == tallest){
            count++;
        }
    }
    printf("%i", count);
}
