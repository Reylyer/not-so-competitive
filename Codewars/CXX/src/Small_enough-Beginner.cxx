#include <vector>
#include <iostream>

bool small_enough(std::vector<int> arr, int limit) {
    bool ok = true;
    for(auto i: arr){
        ok = ok && (i <= limit);
        if(!ok) break;
    }
    return ok;
}

int main(){
    std::vector<int> test_case{78, 117, 110, 99, 104, 117, 107, 115};
    std::cout << small_enough(test_case, 100) << std::endl;
}