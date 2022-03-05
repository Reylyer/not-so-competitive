#include <iostream>
#include <cstdio>
#include <string>
#include <bitset>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vctint;
typedef string str;
#define vectInp(i,n,temp,c)\
for(i=0;i<n;i++){ cin>>temp; c.pb(temp); }
#define endl '\n'
#define bitcount __builtin_popcount
#define fabsl __builtin_fabsl
#define sqrtl __builtin_sqrtl
#define atan2l __builtin_atan2l
#define cosl __builtin_cosl
#define sinl __builtin_sinl
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define pb(x) push_back(x)
#define all(a) (a).begin(),(a).end()
#define iter(a,b) for (__typeof(b)a=0;a<(b);++a)
#define reti(a,b) for (__typeof(b)a=(b)-1;a>=0;--a)
#define foreach(a,b) for (auto&a:(b))
string toLower(string str){
    transform(str.begin(), str.end(), str.begin(),
    [](unsigned char out){ return tolower(out); });
    return str;
}
void init() {ios_base::sync_with_stdio(0);cin.tie(0);}
void algo() {
    string c,s,out;
    int i=0,j=0,lastIndex = 0,ii,checked[1000];
    char checkC;
    bool yes=true;
    getline(cin, c);
    getline(cin, s);
    int m = c.size(), n = s.size();
    while(i<n){
        if(s[i]==' ')i++;
        checkC = s[i];
        for(j=0;j<m;j++){
            if(c[j] == ' '){
                continue;
            }
            if(checkC == c[j]){
                yes = true;
                lastIndex = j;
                c.erase(j, 1);
                cout<<c<<endl;
                break;
            }
            else if(j==m-1) yes = false;
        }
        if(!yes)break;
        i++;
        n=s.size();
        
    }
    out = yes ? "Bisa" : "Tidak Bisa";
    cout<<out;
}
int main() {
    init();
    algo();   
}