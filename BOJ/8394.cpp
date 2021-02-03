//BOJ 8394 - 악수

#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    int n; cin >> n;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=4; i<=n; i++) 
        v.push_back((v[i-1] + v[i-2]) % 10);
    
    cout << v[n];


    return 0;
}