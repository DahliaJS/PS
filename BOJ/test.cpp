//BOJ 

#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int N, K; cin >> N;
    for(int i=0; i<N; i++) {
        int t; cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    
    cout << v[K-1];

    return 0;
}