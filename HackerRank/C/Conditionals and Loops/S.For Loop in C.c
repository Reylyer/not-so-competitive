#include <stdio.h>

int main(){
    int a, b;
    char* rep[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i < 10) printf("%s\n", rep[i]);
        else{
            if(i % 2 == 1) printf("odd\n");
            else printf("even\n");
        }
    }
}