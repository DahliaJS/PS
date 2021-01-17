//BOJ 10799 - 쇠막대기

#include <iostream>

using namespace std;

int sticks, cnt;

int main() {
    string s;
    cin >> s;

    for(int i=0; i<s.size()-1; i++) {
        if(s[i] == '(' && s[i+1] == ')') {
            cnt += sticks;
            i++;
        }
        else if(s[i] == '(') 
            sticks++;
        else if(s[i] == ')') {
            cnt++;
            sticks--;
        }
    }
    if(s[s.size()-1] == s[s.size()-2]) cnt++;
    cout << cnt;

    return 0;
}