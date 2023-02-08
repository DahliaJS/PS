//BOJ 14494 - 다이나믹이 뭐예요?

#include <iostream>

using namespace std;

unsigned int dp[1001][1001];

int main() {
    int n, m;
    cin >> n >> m;

    dp[0][0] = 1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1]) % 1000000007;
        }
    }
    cout << dp[n][m];

    return 0;
}