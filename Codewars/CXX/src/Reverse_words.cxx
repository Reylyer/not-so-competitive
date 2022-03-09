#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

// HERE

// https://stackoverflow.com/a/42315689/14052716
char* strtoke(char *str, const char *delim){
    static char *start = NULL; /* stores string str for consecutive calls */
    char *token = NULL; /* found token */
    /* assign new start in case */
    if (str) start = str;
    /* check whether text to parse left */
    if (!start) return NULL;
    /* remember current start as found token */
    token = start;
    /* find next occurrence of delim */
    start = strpbrk(start, delim);
    /* replace delim with terminator and move start to follower */
    if (start) *start++ = '\0';
    /* done */
    return token;
}

std::string reverse_words(std::string str){
    std::string endres = "";
    char *arrstr = strtoke(&str[0], " ");
    while(true){
        for(size_t l = static_cast<int>(strlen(arrstr)); l != 0 ; l--) endres.push_back(arrstr[l-1]);
        arrstr = strtoke(NULL, " "); 
        if(arrstr == NULL){
            break;
        }
        endres.push_back(' ');
    }
    return endres;
}

// END HERE

int main(){
    string test_case = "double  spaced  words";
    cout << reverse_words(test_case) << endl;
}

// double  spaced  words