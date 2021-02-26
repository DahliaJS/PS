//BOJ 1747 - 소수&팰린드롬

#include <iostream>
#include <cstring>
#define SIZE 1004001

using namespace std;

bool pn[SIZE];

int main() {
    int N; cin >> N;

    memset(pn, true, sizeof(pn));
    pn[0] = false;
    pn[1] = false;
    for(int i=0; i<SIZE; i++) {
        for(int j=2; j*j<=i; j++)
            if(i%j == 0) {
                pn[i] = false;
                break;
            }
    }

    for(int i=N; i<SIZE; i++) {
        if(!pn[i]) continue;
        string s = to_string(i);
        bool isPAL = true;
        for(int j=0; j<s.size()/2; j++)
            if(s[j] != s[s.size()-1-j]) {
                isPAL = false;
                break;
            }
        
        if(isPAL) {
            cout << i;
            break;
        }
    }
    return 0;
}