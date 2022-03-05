#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    short N, M, i, t, valid, tt;
    vector<short> S, B;
    scanf("%hi %hi", &N, &M);
    for(i = 0; i < N; i++){
        scanf("%hi", &t);
        S.push_back(t);
    }
    for(i = 0; i < M; i++){
        scanf("%hi", &t);
        B.push_back(t);
    }
    sort(S.begin(), S.end());
    sort(B.begin(), B.end());
    valid = 0;
    for(i = 0; i < N; i++){
        t = S.back(); // bebek
        tt = B.back(); // sepatu
        while(tt >= t){
            if(t == tt || t + 1 == tt){
                valid++;
                B.pop_back();
                break;
            }
            B.pop_back();
            tt = B.back();
        }
        S.pop_back();
    }
    printf("%hi", valid);
}