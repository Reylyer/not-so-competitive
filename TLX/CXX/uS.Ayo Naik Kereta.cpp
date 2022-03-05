#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long N, K, C;
    long TR, TL, SR, SL;
    short P;
    bool CR, CL;
    cin >> N >> K >> C >> P;
    int A[200000];
    int B[200000];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    for(int i = 0; i < N; i++){
        // cout << "init TR : " << TR << " SR : " << SR << " TL : " << TL << " SL : " << SL << endl;
        CR = true;
        CL = true;
        for(int j = N - 1; j > i; j--){
            if(K >= B[j] + A[i] + pow(abs(i - j), P)*C ){
                TR = abs(i - j) + 1;
                SR = K - (B[j] + A[i] + pow(abs(i - j), P)*C) ;
                CR = false;
                // cout << "TR : " << TR << ", SR : " << SR << endl;
                break;
            }
        }
        if(CR){
            TR = 0;
            SR = K;
        }
        for(int j = 0; j <= i; j++){
            if(K >= B[j] + A[i] + pow(abs(i - j), P)*C){
                TL = abs(i - j) + 1;
                SL = K - (B[j] + A[i] + pow(abs(i - j), P)*C) ;
                CL = false;
                // cout << "TL : " << TL << ", SL : " << SL << endl;
                break;
            }
        }
        if(CL){
            TL = 0;
            SL = K;
        }
        // cout << "TR : " << TR << " SR : " << SR << " TL : " << TL << " SL : " << SL << endl;
        if(TR > TL){
            cout << TR << " " << SR << endl;
        } else if(TR < TL){
            cout << TL << " " << SL << endl;
        } else{
            if(SR > SL){
                cout << TR << " " << SR << endl;
            } else if(SR < SL){
                cout << TL << " " << SL << endl;
            } else if(SR == SL && SR != 0){
                cout << TR << " " << SR << endl;
            } else{
                cout << "0 " << K << endl;
            }
        }

    }
}