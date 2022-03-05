#include<bits/stdc++.h>

#define wah using
#define wahh namespace
#define wahhh std

wah wahh wahhh;
bool check5(long long d) {
    long long i,check=5;
    for(i=0;i<28;i++){
        if(check == d)return true;
        else check*=5;
    }
    return false;
}

int main(){
    long long N, i, temp, zzz;
    cin >> N;
    
    temp = N;
    i = 1;
    if(check5(N)){
        cout << -1 << endl;
        return 0;
    }
    while(true){
        zzz = temp / pow(5, i);
        // cout << zzz << endl;
        if(zzz == 0){
            break;
        }
        // cout << temp << endl;

        temp -= zzz;
        temp ++;
        // cout << temp << endl;
        i ++;
    }
    temp *= 5;
    for(i = 0; i < 5; i++){
        if(i == 4){
            cout << temp + i;
        } else{
            cout << temp + i << " ";
        }
    }
    cout << endl;
}

