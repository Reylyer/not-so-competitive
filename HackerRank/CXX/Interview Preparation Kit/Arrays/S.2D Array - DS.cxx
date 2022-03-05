#include<stdio.h>

int main(){
    short arrO[6][6], i, j, max = -63, arrM[4][4], iS, jS;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            scanf("%hi", &arrO[i][j]);
        }
    }
    for(i = 1; i < 5; i++){
        for(j = 1; j < 5; j++){
            arrM[i - 1][j - 1]= arrO[i - 1][j - 1] + arrO[i - 1][j] + arrO[i - 1][j + 1] + 
                                                        arrO[i][j] + 
                                arrO[i + 1][j - 1] + arrO[i + 1][j] + arrO[i + 1][j + 1];
            if(arrM[i - 1][j - 1] > max){
                max = arrM[i - 1][j - 1];
                iS = i;
                jS = j;
            }
        }
    }
    // printf("%hu %hu %hu\n  %hu\n%hu %hu %hu",   arrO[iS - 1][jS - 1], arrO[iS - 1][jS], arrO[iS - 1][jS + 1], 
    //                                                                 arrO[iS][jS],
    //                                             arrO[iS + 1][jS - 1], arrO[iS + 1][jS], arrO[iS + 1][jS + 1]);
    printf("%hi", max);
}
