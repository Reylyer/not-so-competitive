#include<iostream>
#include<string> 
#include<regex>   
using namespace std;

int main(){
    string inp;
    cin >> inp;
    if(regex_search(inp, regex("[a-z\\.]"))){
        cout << "kata" << endl;
        return 0;
    }
    if(inp[0] == '-'){
        if(inp[1] == '0'){
            cout << "nol" << endl;
        } else{
            cout << "bilangan bulat negatif" << endl;
        }
    } else {
        if(inp[0] == '0'){
            cout << "nol" << endl;
        } else {
            cout << "bilangan bulat positif" << endl;
        }
    }
}