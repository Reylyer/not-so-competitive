#include <stdio.h>

int main() {
    char ch;
    char middle[101];
    char last[101];
    
    scanf("%c", &ch);
    scanf("%[^ ]s", middle);
    scanf("%[^\n]s", last);
    
    printf("%c", ch);
    printf("%s", middle);
    printf("%s", last);
    return 0;
}