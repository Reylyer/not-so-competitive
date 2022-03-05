#include<stdio.h>
#include<string>

using namespace std;

int main(){
    short int l;
    char a, b;
    scanf("%hi %c %c", &l, &a, &b);
    for(short i = 0; i < l; i++){
        for(short j = 0; j < l; j++){
            if(j == i || j == l - i -1){
                printf("%c", b);
            } else {
                printf("%c", a);
            }
        }
        printf("\n");
    }
}