#include <stdio.h>

void update(int *a,int *b) {
    int for_a = *a + *b;
    *b = *a - *b > 0 ? *a - *b : -1 *(*a - *b);
    *a = for_a;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}