#include<iostream>

using namespace std;

int main(){
    unsigned short n, m, i, j;
    int max, b, keyb[1000], drive[1000], sum;
    cin >> b >> n >> m;
    for(i = 0; i < n; i++) cin >> keyb[i];
    for(i = 0; i < m; i++) cin >> drive[i];
    max = -1;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            sum = keyb[i] + drive[j];
            if(sum <= b && max < sum){
                max = sum;
            }
        }
    }
    cout << max << endl;
}