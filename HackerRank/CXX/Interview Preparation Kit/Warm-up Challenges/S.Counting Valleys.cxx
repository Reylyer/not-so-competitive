#include<stdio.h>
#include<string.h>

int main(){
    int i, n, pos = 0, valley = 0;
    char path[1000000];
    bool streak = false;
    scanf("%i", &n);
    scanf("%s", &path);
    for(i = 0; i < n; i++){
        if(path[i] == 'D'){
            pos--;
        } else{
            pos++;
        }
        if(!streak && pos == -1){
            streak = true;
            valley++;
        }else if(streak && pos == 0){
            streak = false;
        }
    }
    printf("%i", valley);
}