#include<iostream>
#include <string>

size_t duplicateCount(const char* in){
    std::string word(in);
    int count[255] = {0};
    size_t rep = 0;
    // counting occurance
    for(unsigned char chr: word) chr >= 'a' && chr <= 'z' ? count[chr - 32]++ : count[chr]++;
    // count repetitive char
    for(unsigned char i = 0; i < 255; i++) count[i] > 1 ? rep++: rep+=0;
    return rep;
}

int main(){
    std::string test_case = "aabBcde";
    std::cout << duplicateCount(test_case.c_str()) << std::endl;
}
