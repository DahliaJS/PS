//BOJ 17626 - Four Squares

#include <iostream>

using namespace std;

int dp[50001];

int main() {
    int n; cin >> n;
    fill_n(dp, 50000, 123456789);
    for(int i=1; i*i<=n; i++)
        dp[i*i] = 1;

    for(int i=1; i<=n; i++)
        for(int j=1; j*j<=i; j++)
            dp[i] = min(dp[i], dp[j*j] + dp[i-j*j]);
    
    cout << dp[n];
    return 0;
}