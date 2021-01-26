//BOJ 2156 - 포도주 시식

#include <iostream>

using namespace std;

int wine[10001], dp[3][10001];
int m;

int main() {
    int n; cin >> n;
    for(int i=1; i<=n; i++) 
        cin >> wine[i];

    dp[0][1] = wine[1];
    for(int i=2; i<=n; i++) {
        dp[0][i] = max(dp[0][i-2], max(dp[1][i-2], dp[2][i-2])) + wine[i];
        dp[1][i] = dp[0][i-1] + wine[i];
        dp[2][i] = max(dp[0][i-1], max(dp[1][i-1], dp[2][i-1]));
    }

    for(int i=0; i<3; i++) 
        for(int j=1; j<=n; j++) 
            m = max(m, dp[i][j]);
        
    
    cout << m;

    return 0;
}