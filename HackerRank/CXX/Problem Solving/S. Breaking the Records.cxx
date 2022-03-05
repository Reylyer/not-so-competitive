#include<iostream>

using namespace std;

int main(){
    unsigned short n, cMin = 0, cMax = 0;
    unsigned int temp, min, max;
    cin >> n;
    cin >> min;
    max = min; // init
    for(; n > 1; n--){
        cin >> temp;
        if(min > temp){
            min = temp;
            cMin++;
        }
        if(max < temp){
            max = temp;
            cMax++;
        }
    }
    cout << cMax << " " << cMin << endl;
}