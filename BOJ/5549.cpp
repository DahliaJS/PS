//BOJ 5549 - 행성 탐사

#include <iostream>

using namespace std;

struct territory {
    int j, o, i;
    
    territory(): j(0), o(0), i(0) {}
};

territory dp[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, K;
    cin >> M >> N >> K;
    for (int i=1; i<=M; i++)
    {
        for (int j=1; j<=N; j++)
        {
            char t;
            cin >> t;
            
            dp[i][j].j = dp[i-1][j].j + dp[i][j-1].j - dp[i-1][j-1].j + (t == 'J');
            dp[i][j].o = dp[i-1][j].o + dp[i][j-1].o - dp[i-1][j-1].o + (t == 'O');
            dp[i][j].i = dp[i-1][j].i + dp[i][j-1].i - dp[i-1][j-1].i + (t == 'I');
        }
    }

    while (K--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << dp[c][d].j - dp[c][b-1].j - dp[a-1][d].j + dp[a-1][b-1].j << ' ';
        cout << dp[c][d].o - dp[c][b-1].o - dp[a-1][d].o + dp[a-1][b-1].o << ' ';
        cout << dp[c][d].i - dp[c][b-1].i - dp[a-1][d].i + dp[a-1][b-1].i << '\n';
    }

    return 0;
}