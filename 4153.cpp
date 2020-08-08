//BOJ 4153 - 직각삼각형

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A, B, C, ob=-1;
    vector<int> v;
    while(true) {
        cin >> A >> B >> C;
        if(!A && !B && !C) break;

        v.push_back(A);
        v.push_back(B);
        v.push_back(C);
        sort(v.begin(), v.end());

        if(v[2]*v[2] == v[0]*v[0] + v[1]*v[1])
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
        
        v.clear();
    }
    return 0;
}