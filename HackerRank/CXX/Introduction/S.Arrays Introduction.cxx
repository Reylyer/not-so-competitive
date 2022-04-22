#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> to_rev;
    to_rev.reserve(n);
    for(int i = 0; i<n; i++){
        cin >> to_rev[i];
    }
    while(n--){
        cout << to_rev[n] << " ";
    }

    return 0;
}
