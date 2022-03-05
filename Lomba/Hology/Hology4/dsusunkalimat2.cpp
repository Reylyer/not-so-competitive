#include<bits/stdc++.h>

#define wah using
#define wahh namespace
#define wahhh std

wah wahh wahhh;

int main(){
    string c,s,out;
    int i=0,j=0,lastIndex = 0,ii;
    getline(cin, c);
    getline(cin, s);
    int a[255] = {0};
    int b[255] = {0};
    
    for(auto sa : c){
        if(sa == ' '){
            continue;
        }
        // cout << sa << endl;
        a[(int)sa]++;
    }
    for(auto sa : s){
        if(sa == ' '){
            continue;
        }
        b[(int)sa]++;
    }
    for(i = 0; i < 255; i++){
        // cout << a[i] << " " << b[i] << endl ;
        if(a[i] < b[i]){
            cout << "Tidak Bisa" << endl;
            return 0;
        }
    }
    cout << "Bisa" << endl;

}