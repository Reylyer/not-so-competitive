#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int freq[10] = {0};
    char *s;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]s", s);
    s = (char*)realloc(s, strlen(s) + 1);

    for(int i = 0; i < strlen(s); i++){
        if(*(s + i) < 58){
            freq[*(s + i) - 48]++;
        }
    }
    for(int i = 0; i < 10; i++){
        if(i != 9) printf("%d ", freq[i]);
        else printf("%d", freq[i]);
    }
    free(s);
}