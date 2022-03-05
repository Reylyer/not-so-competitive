#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    short a, grade;
    cin >> a;
    for(; a > 0; a --){
        cin >> grade;
        if(grade >= 38 && grade % 5 > 2){
            cout << (grade/5)*5 + 5 << endl;
        } else{
            cout << grade << endl;
        }
    }
}