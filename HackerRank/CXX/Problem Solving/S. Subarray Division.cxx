#include<iostream>

using namespace std;

int main(){
    unsigned short totemp, i, j, n, s[100], d, m, count = 0;
    cin >> n;
    for(i = 0; i < n; i++) cin >> s[i];
    cin >> d >> m;
    for(i = 0; i < n - m + 1; i++){
        totemp = 0;
        for(j = 0; j < m; j++) totemp += s[i + j];
        if(totemp == d) count++;
    }
    cout << count << endl;
}