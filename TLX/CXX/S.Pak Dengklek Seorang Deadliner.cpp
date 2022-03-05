#include<stdio.h>

int main(){
    unsigned short a;
    scanf("%hu", &a);
    printf("%hu\n%hu\n%hu\n", a/3600, (a%3600)/60, a%60);
}