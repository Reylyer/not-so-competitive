#include<iostream>

using namespace std;

int main(){
    unsigned int i, n, k, tot = 0, temp, b, m;
    cin >> n >> k;
    for(i = 0; i < n;i++){
        if(i == k){
            cin >> m;
        } else {
            cin >> temp;
            tot+= temp;
        }
    }
    cin >> b;
    if(b == (tot)/2){
        cout << "Bon Appetit" << endl;
    } else{
        cout << b - (tot)/2 << endl;
    }
} 