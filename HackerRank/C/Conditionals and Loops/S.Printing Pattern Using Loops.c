#include <stdio.h>
#include <math.h>

int main(){
    int n, min, subjectI, subjectJ;
    scanf("%d", &n);
    for(int i = 0; i < n*2 - 1; i++){
        for(int j = 0; j < n*2 - 1; j++){
            subjectI = i < n ? i : n*2 - i - 2;
            subjectJ = j < n ? j : n*2 - j - 2;
            min = subjectJ < subjectI ? subjectJ : subjectI;
            if(j != n*2 - 2) printf("%d ", abs(min - n));
            else printf("%d\n", abs(min - n));
        }
    }
}


// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i < n*2 - 1; i++){
//         for(int j = 0; j < n*2 - 1; j++){
//             int min = j < i ? j : i;
//             if(j != n*2 - 2) printf("%d ", abs(min - n));
//             else printf("%d\n", abs(min - n));
//         }
//     }
// }
