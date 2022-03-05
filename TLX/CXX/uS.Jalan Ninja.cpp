#include<iostream>

using namespace std;


int main(){
    short i, j, N, M;
    short X1 = 0;
    short X2 = -1;
    short O1 = 0;
    short O2 = 1;
    char charI;
    cin >> N >> M;
    if(N == 1){
        O1 = 1;
        for(i = 0; i < M; i++){
            cin >> charI;
            if(charI == 'X'){
                cout << "1 " << X1 + 1 << endl;
                X1 += 2;
            } else{
                cout << "1 " << O1 + 1 << endl;
                O1 += 2;
            }
            cout << flush;
        }
    } else if(M == 1){
        O1 = 1;
        for(i = 0; i < N; i++){
            cin >> charI;
            if(charI == 'X'){
                cout << X1 + 1 << " 1" << endl;
                X1 += 2;
            } else{
                cout << O1 + 1 << " 1" << endl;
                O1 += 2;
            }
            cout << flush;
        }
    } else if(N <= M){
        for(i = 0; i < N; i++){
            for(j = 0; j < M; j++){
                cin >> charI;
                if(charI == 'X'){
                    X2++;
                    if(X1 % 2){ // ganjil
                        if(X2 % 4 < 2){
                            X2 +=2;
                        }
                    } else{
                        if(X2 % 4 >= 2){
                            X2+=2;
                        }
                    }
                    if(X2 >= M){
                        X2 = 0;
                        X1++;
                        if(X1 % 2){
                            if(X2 % 4 < 2){
                                X2 +=2;
                            }
                        } else{
                            if(X2 % 4 >= 2){
                                X2+=2;
                            }
                        }
                    }
                    cout << X1 + 1 << ' ' << X2 + 1 << endl;
                }else{
                    O2++;
                    if(O1 % 2){
                        if(O2 % 4 >= 2){
                            O2+=2;
                        }
                    } else{
                        if(O2 % 4 < 2){
                            O2 +=2;
                        }
                    }
                    if(O2 >= M){
                        O2 = 0;
                        O1++;
                        if(O1 % 2){
                            if(O2 % 4 >= 2){
                                O2+=2;
                            }
                        } else{
                            if(O2 % 4 < 2){
                                O2 +=2;
                            }
                        }
                    }
                    cout << O1 + 1 << ' ' << O2 + 1 << endl;
                }
                cout << flush;
            }
        }
    } else{
        for(i = 0; i < N; i++){
            for(j = 0; j < M; j++){
                cin >> charI;
                if(charI == 'X'){
                    X2++;
                    if(X1 % 2){
                        if(X2 % 4 < 2){
                            X2 +=2;
                        }
                    } else{
                        if(X2 % 4 >= 2){
                            X2+=2;
                        }
                    }
                    if(X2 >= N){
                        X2 = 0;
                        X1++;
                        if(X1 % 2){
                            if(X2 % 4 < 2){
                                X2 +=2;
                            }
                        } else{
                            if(X2 % 4 >= 2){
                                X2+=2;
                            }
                        }
                    }
                    cout << X2 + 1 << ' ' <<  X1 + 1<< endl;
                }else{
                    O2++;
                    if(O1 % 2){
                        if(O2 % 4 >= 2){
                            O2+=2;
                        }
                    } else{
                        if(O2 % 4 < 2){
                            O2 +=2;
                        }
                    }
                    if(O2 >= N){
                        O2 = 0;
                        O1++;
                        if(O1 % 2){
                            if(O2 % 4 >= 2){
                                O2+=2;
                            }
                        } else{
                            if(O2 % 4 < 2){
                                O2 +=2;
                            }
                        }
                    }
                    cout << O2 + 1 << ' ' <<  O1 + 1 << endl;
                }
                cout << flush;
            }
        }
    }
}