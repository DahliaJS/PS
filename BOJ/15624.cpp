//BOJ 15624 - 피보나치 수 7

#include <iostream>

using namespace std;

int dp[1000001] = {0, 1, 1, 2, };

int main() {
    int n; cin >> n;

    for(int i=4; i<=n; i++) 
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000007;
    
    cout << dp[n];
    return 0;
}