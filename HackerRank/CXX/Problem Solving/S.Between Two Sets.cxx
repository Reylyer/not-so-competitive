#include<iostream>
#include<vector>
using namespace std;

int main(){
    unsigned short i, j, n, m, maxm = 0, a[10], b[10], tot;
    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i = 0; i < m; i++){
        cin >> b[i];
        if(b[i] > maxm){
            maxm = b[i];
        }
    }
    tot = 0;
    for(i = 1; i <= maxm; i++){
        // cout << i << "loop" << endl;
        bool skip = false;
        for(j = 0; j < n; j++){
            // cout << "inj" << j << endl;
            if(i % a[j] != 0){
                skip = true;
                break;
            }
        }
        // cout << "skip" << endl;
        if(skip) continue;
        for(j = 0; j < m; j++){
            if(b[j] % i != 0){
                skip = true;
                break;
            }
        }
        // cout << "dskip" << endl;
        if(skip) continue;
        // cout << tot << "test" << endl;
        tot++;
    }
    cout << tot << endl;
}