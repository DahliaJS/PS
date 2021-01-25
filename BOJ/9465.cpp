//BOJ 9465 - 스티커

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    for(int t=0; t<T; t++) {
        int n; cin >> n;
        int sticker[2][100001] = {0, };
        int dp[3][100001] = {0, };
        for(int i=0; i<n*2; i++) {
            int s; cin >> s;
            if(i<n) sticker[0][i] = s;
            else sticker[1][i-n] = s;
        }

        for(int i=1; i<=n; i++) {
            dp[0][i] = max(dp[1][i-1], dp[2][i-1]);
            dp[1][i] = max(sticker[0][i-1] + dp[0][i-1], sticker[0][i-1] + dp[2][i-1]);
            dp[2][i] = max(sticker[1][i-1] + dp[0][i-1], sticker[1][i-1] + dp[1][i-1]);
        }
        int result = max(dp[0][n], max(dp[1][n], dp[2][n]));
        cout << result << '\n';
    }


    return 0;
}