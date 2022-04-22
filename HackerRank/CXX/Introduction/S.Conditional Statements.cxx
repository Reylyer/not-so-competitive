#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string plain_eng;
    switch(n){
        case 1: plain_eng = "one"; break;
        case 2: plain_eng = "two"; break;
        case 3: plain_eng = "three"; break;
        case 4: plain_eng = "four"; break;
        case 5: plain_eng = "five"; break;
        case 6: plain_eng = "six"; break;
        case 7: plain_eng = "seven"; break;
        case 8: plain_eng = "eight"; break;
        case 9: plain_eng = "nine"; break;
        default : plain_eng = "Greater than 9";
    }
    cout << plain_eng;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
