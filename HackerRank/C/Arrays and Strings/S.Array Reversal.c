#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, *arr, i, tmp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(i = 0; i < num/2; i++){
        tmp = *(arr + i);
        *(arr + i) = *(arr + num - i - 1);
        *(arr + num - i - 1) = tmp;
        // arr[i] = arr[num - i - 1];
        // arr[num - i - 1] = tmp;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    free(num);
    return 0;
}