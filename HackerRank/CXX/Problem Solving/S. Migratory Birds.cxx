#include<iostream>

using namespace std;

int main(){
    unsigned int i, n, b[5] = {0}, max;
    unsigned short temp;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> temp;
        b[temp - 1]++;
    }
    // cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << " " << b[4] << endl;
    max = 0; // in index first
    for(i = 1; i < 5; i++){
        if(b[max] < b[i]) max = i;
    }
    cout << max + 1 << endl;
}