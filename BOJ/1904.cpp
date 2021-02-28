//BOJ 1904 - 01타일

#include <iostream>

using namespace std;

int dp[1000001] = {0, 1, 2, 3, };

int main() {
    int N; cin >> N;

    for(int i=4; i<=N; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % 15746;

    cout << dp[N];
    return 0;
}