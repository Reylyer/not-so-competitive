#include<stdio.h>

int main(){
    short n, t1 = 0, t2 = 0, t3 = 0, temp, tt;
    // float n;
    scanf("%hi", &n);
    tt = n;
    for(; n > 0; n--){
        scanf("%hi", &temp);
        if(temp > 0){
            t1++;
        } else if(temp < 0){
            t2++;
        } else{
            t3++;
        }
    }
    printf("%f\n%f\n%f\n", (float)t1/tt, (float)t2/tt, (float)t3/tt);
}