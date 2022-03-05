#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char rStr[101];
    unsigned long long n, total;
    unsigned short count = 0, i = 0, sisa, cs = 0, con;
    scanf("%100s", rStr);
    scanf("%llu", &n);
    while(true){
        if(rStr[i] == '\0'){
            // printf("break at i = %hu\n", i);
            break;
        }
        if(rStr[i] == 'a'){
            count++;
        }
        // printf("i = %hu\n", i);
        i++;
    }
    con = i;
    sisa = n % i;
    for(i = 0; i < sisa; i++){
        if(rStr[i] == 'a'){
            cs++;
        }
    }
    // printf("n = %llu, count = %hu, cs = %hu, i = %hu\n", n, count, cs, con);
    total = (n/con)*count + cs;
    
    printf("%llu", total);

}