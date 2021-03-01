//BOJ 2893 - 설탕 배달

#include <iostream>
#define big 123456789

using namespace std;

int dp[5001] = {big, big, big, 1, big, 1, 2, big, };

int main() {
    int N; cin >> N;
    for(int i=6; i<=N; i++)
        dp[i] = min(dp[i-3], dp[i-5]) + 1;

    if(dp[N] >= big) cout << -1;
    else cout << dp[N];

    return 0;
}