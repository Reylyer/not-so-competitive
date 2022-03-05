#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    float  n;
    scanf("%f", &n);
    if(fmod(sqrt(n), 1) == 0){
        printf("%i\n", (int)sqrt(n));
    } else {
        printf("0\n");
    }
}