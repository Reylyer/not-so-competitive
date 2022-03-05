#include<iostream>
#include<cmath>

using namespace std;

int main(){
    unsigned short i, q, x, y, z;
    cin >> q;
    for(i = 0; i < q; i++){
        cin >> x >> y >> z;
        if(abs(z - x) < abs(z -y)){ // Cat A route
            cout << "Cat A" << endl;
        } else if(abs(z - x) > abs(z -y)){
            cout << "Cat B" << endl;
        } else{
            cout << "Mouse C" << endl;
        }
    }
}