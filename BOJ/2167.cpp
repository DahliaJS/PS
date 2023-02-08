//BOJ 2167 - 2차원 배열의 합

#include <iostream>

using namespace std;

int arr[301][301];
int dp[301][301];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K;
    cin >> N >> M;

    for (int i=1; i<=N; i++)
    {
        for (int j=1; j<=M; j++)
        {
            cin >> arr[i][j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];                
        }
    }
    cin >> K;

    while (K--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << dp[c][d] - dp[a-1][d] - dp[c][b-1] + dp[a-1][b-1] << '\n';
    }

    return 0;
}