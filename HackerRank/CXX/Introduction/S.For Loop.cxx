#include <iostream>
#include <iomanip>

using std::fixed;
using std::setprecision;
using std::cin;
using std::cout;
using std::endl;

int main(){
    int st, ed;
    cin >> st >> ed;
    st--;
    while(++st <= ed){
        switch(st){
            case 1: cout << "one"; break;
            case 2: cout << "two"; break;
            case 3: cout << "three"; break;
            case 4: cout << "four"; break;
            case 5: cout << "five"; break;
            case 6: cout << "six"; break;
            case 7: cout << "seven"; break;
            case 8: cout << "eight"; break;
            case 9: cout << "nine"; break;
            default:
                if(st%2) cout << "odd";
                else cout << "even";
        }
        cout << endl;
    }
}