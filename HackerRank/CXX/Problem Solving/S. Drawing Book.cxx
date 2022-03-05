#include<iostream>

using namespace std;

int main(){
    unsigned int n, p;
    cin >> n >> p;
    if(p <= n / 2){
        cout << p / 2 << endl;
    } else {
        if(n % 2 == 0){
            cout << (n - p + 1) / 2 << endl;
        } else {
            cout << (n - p) / 2 << endl;
        }
    }
}