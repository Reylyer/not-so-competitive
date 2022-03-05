#include<bits/stdc++.h>

#define wah using
#define wahh namespace
#define wahhh std

wah wahh wahhh;

int main(){
    short n, m, i, j, mirrori, mirrorj, subjecti, subjectj, mini;
    cin >> n >> m;
    mirrori = n/2;
    mirrorj = m/2;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(i >= mirrori){
                if(j >= mirrorj){
                    subjecti = n - i - 1;
                    subjectj = m - j - 1;
                }else{
                    subjecti = n - i - 1;
                    subjectj = j;
                }
            }else{
                if(j >= mirrorj){
                    subjecti = i;
                    subjectj = m - j - 1;
                }else{
                    subjecti = i;
                    subjectj = j;
                }
            }
            mini = subjecti < subjectj ? subjecti : subjectj;
            cout << mini*2;
            if(j != m - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
}