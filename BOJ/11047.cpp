//BOJ 11047 - 동전 0

#include <iostream>
#include <vector>

using namespace std;

vector<int> coin;
int cnt;

int main() {
    int N, K;
    cin >> N >> K;
    for(int i=0; i<N; i++) {
        int v; cin >> v;
        coin.push_back(v);
    }

    for(int i=N-1; i>=0; i--)
        while(K >= coin[i]) {
            K = K - coin[i];
            cnt++;
        }
    
    cout << cnt;

    return 0;
}