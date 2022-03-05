#include <stdio.h>

int main(){
    int n, k, maxAnd = 0, maxOr = 0, maxXor = 0;
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if((i & j) < k && (i & j) > maxAnd) maxAnd = i & j;
            if((i | j) < k && (i | j) > maxOr) maxOr = i | j;
            if((i ^ j) < k && (i ^ j) > maxXor) maxXor = i ^ j;
            
        }
    }
    printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}