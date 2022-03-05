#include <bits/stdc++.h>
#include "stdio.h"
using namespace std;

int main(){
    short l, t;
    int tot = 0;
    scanf("%hi", &l);
    for(short i = 0; i < l; i++){
        scanf("%hi", &t);
        tot +=t;
    }
    printf("%i", tot);
}