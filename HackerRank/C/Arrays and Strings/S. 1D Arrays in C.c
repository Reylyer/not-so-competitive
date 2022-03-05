#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, tot = 0;
    scanf("%d", &n);
    int* arrInt = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &arrInt[i]);
    for(int i = 0; i < n; i++) tot += arrInt[i];
    printf("%d", tot);
    free(arrInt);
}