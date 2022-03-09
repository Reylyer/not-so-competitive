#include <iostream>
#include <vector>


std::vector<long long> pascalsTriangle(int n){
    std::vector<long long> flattenPT;
    std::vector<long long> rside;
    int i, j, s;
    long long t;
    for(i = 1; i <= n; i++){
        s = (i-2)*(i-1)/2;
        std::cout << "i: " << i << std::endl;
        std::cout << "s: " << s << std::endl;

        for(j = 0; j*2 < i; j++){
            if(j == 0) t=1;
            else {
                std::cout << "debug" << std::endl;
                std::cout << s+j-1 << " " << s+j << std::endl;
                std::cout << flattenPT[s+j-1] << " " << flattenPT[s+j] << std::endl;
                t = flattenPT[s+j-1] + flattenPT[s+j]; 
            }
            flattenPT.push_back(t);
            rside.push_back(t);
        }
        for (int i = 0; i < rside.size(); i++) std::cout << rside[i] << " ";
        std::cout << std::endl;
        if(i%2)rside.pop_back();
        for(j = rside.size()-1; j != -1; j--){
            flattenPT.push_back(rside.back());
            rside.pop_back();
        }
    }

    return flattenPT;
}


int main(){
    std::vector<long long> fah = pascalsTriangle(4);
    for (int i = 0; i < fah.size(); i++) std::cout << fah[i] << " ";
}