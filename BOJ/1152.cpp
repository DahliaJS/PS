//BOJ 1152 - 단어의 개수

#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i=0;
    if(s[0] == ' ') i++;

    int cnt=0;
    for(; i<s.size(); i++) 
        if(s[i] == ' ') cnt++;

    if(s[s.size()-1] != ' ') cnt++;

    cout << cnt;

    return 0;
}