#include<bits/stdc++.h>
#include "stdio.h"
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
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define iter(a,b) for (__typeof(b)a=0;a<(b);++a)
#define reti(a,b) for (__typeof(b)a=(b)-1;a>=0;--a)
#define foreach(a,b) for (auto&a:(b))

void init() {ios_base::sync_with_stdio(0);cin.tie(0);}
void algo() {
    int i,j,n,m,temp,check, tttt=0;
    vctint player, ranked,playerRanks;
    vector<int> ranking;
    scanf("%i", &n);
    for(i=0;i<n;i++){
        cin>>temp;
        if(temp!=check){
            ranking.pb(temp);
            // cout<<"ranking: "<<temp<<endl;
        }
        check=temp;
    }
    int relSize = ranking.size();
    scanf("%i", &m);
    // vectInp(i,m,temp,player);
    for(i=0;i<m;i++){
        scanf("%i", &temp);
        for(j=relSize-1;j>=0;j--){
            
            if(j==ranking.size()-1 &&  temp < ranking[j]){ 
                // handle kalo rank terakhir
                tttt = j + 2;
                relSize = j+1;
            }
            else if((j > 0 && ranking[j] < temp && temp < ranking[j-1]) || temp == ranking[j]){
                // handle rank diantara atau sama
                tttt = j+1;
                relSize = j+1;
            }
            else if(j==0 && ranking[j]<temp){
                // handle rank 1
                tttt = 1;
                relSize=j+1;
            }
            
        }
        printf("%i\n", tttt);
    }
}
int main() {
    init();
    algo();
    return 0;
}