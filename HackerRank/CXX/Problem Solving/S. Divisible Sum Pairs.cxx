#include<iostream>

using namespace std;

int main(){
    unsigned short i, j, n, k, ar[100], count = 0;
    cin >> n >> k;
    for(i = 0; i < n; i++) cin >> ar[i];
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if((ar[i] + ar[j]) % k == 0){
                count++;
            }
        }
    }
    cout << count << endl;
}