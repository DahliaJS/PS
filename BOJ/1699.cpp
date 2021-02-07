//BOJ 1699 - 제곱수의 합

#include <iostream>

using namespace std;

int dp[100001];

int main() {
    int n; cin >> n;
    fill_n(dp, 100000, 123456789);
    for(int i=1; i*i<=n; i++)
        dp[i*i] = 1;

    for(int i=1; i<=n; i++)
        for(int j=1; j*j<=i; j++)
            dp[i] = min(dp[i], dp[j*j] + dp[i-j*j]);
    
    cout << dp[n];
    return 0;
}