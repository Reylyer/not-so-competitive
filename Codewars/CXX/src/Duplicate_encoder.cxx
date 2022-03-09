#include<iostream>
#include <string>

std::string duplicate_encoder(const std::string& word){
    int temp, count[255] = {0};
    // counting
    for(unsigned char chr: word) chr >= 'a' && chr <= 'z' ? count[chr - 32]++ : count[chr]++;
    // map result with count map
    std::string res = "";
    for(unsigned char chr: word) count[chr >= 'a' && chr <= 'z' ? chr - 32 : chr] == 1 ? res+='(' : res+=')';
    return res;
}

int main(){
    std::string test_case = "Success";
    std::cout << duplicate_encoder(test_case) << std::endl;
}
