#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    char st[10], *h, *p, n;
    h = (char*)malloc(3);
    p = (char*)malloc(7);
    scanf("%s", &st);
    strncpy(h, st + 0, 2);
    strncpy(p, st + 2, 6);

    if(st[8] == 'P'){
        n = atoi(h);
        if(n == 12){
            printf("%s%s", h, p);
        } else{
            printf("%hi%s", (short)n+12, p);
        }
    } else{
        n = atoi(h);
        if(n == 12){
            printf("00%s", p);
        } else{
            printf("%s%s", h, p);
        }
    }
    free(h);
    free(p);
}