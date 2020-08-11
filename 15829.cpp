//BOJ 15829 - Hashing

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int AtoINT(char a) {
    return int(a) % 96;
}
int main() {
    char c;
    vector<char> s;
    unsigned long long hash = 0;

    short L;
    cin >> L;
    for(int i=0; i<L; i++) {
        cin >> c;
        s.push_back(c);
    }
    for(int i=0; i<s.size(); i++)
        hash += AtoINT(s[i]) * pow(31, i);

    //hash = hash + (L-1);
    cout << hash % 1234567891;

    return 0;
}