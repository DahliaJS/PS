//BOJ 2133 - 타일 채우기

#include <iostream>

using namespace std;

unsigned long long tile[31] = {1, 0, 3, 0, 9, };

int dp(int n) {
    if(!tile[n]) dp(n-2);
    
    tile[n] = tile[n-2] * 3;
    for(int i=4; i<=n; i+=2)
        tile[n] += tile[n-i] * 2;
    
    return tile[n];
}

int main() {
    int N; cin >> N;

    if(N%2) {
        cout << 0;
        return 0;
    }

    if(N>2) dp(N);
    cout << tile[N];

    return 0;
}