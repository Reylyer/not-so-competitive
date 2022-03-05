#include<iostream>
using namespace std;

int main(){
    int start, end, appleT, orangeT, m, n, tot;
    int dist;
    cin >> start >> end;
    cin >> appleT >> orangeT;
    cin >> m >> n;
    tot = 0;
    for(; m > 0; m--){
        cin >> dist;
        dist = dist + appleT;
        if(start <= dist && dist <= end){
            tot++;
        }
    }
    cout << tot << endl;
    tot = 0;
    for(; n > 0; n--){
        cin >> dist;
        dist = dist + orangeT;
        if(start <= dist && dist <= end){
            tot++;
        }
    }
    cout << tot << endl;
}