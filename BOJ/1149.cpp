//BOJ 1149 - RGB거리

#include <iostream>

using namespace std;

int h[1001][3], dp[1001][3];

int main() {
    int N; cin >> N;

    for(int i=0; i<N; i++) 
        for(int j=0; j<3; j++)
            cin >> h[i][j];

    dp[0][0] = h[0][0];
    dp[0][1] = h[0][1];
    dp[0][1] = h[0][2];
    for(int i=0; i<N; i++) {
        dp[i][0] = h[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = h[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = h[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }
    cout << min(min(dp[N-1][0], dp[N-1][1]), dp[N-1][2]);

    return 0;
}