//BOJ 2579 - 계단 오르기

#include <iostream>

using namespace std;

int stairs[301], dp[301];

int main() {
    int N; cin >> N;
    for(int i=1; i<=N; i++)
        cin >> stairs[i];
    
    dp[1] = stairs[1];
    dp[2] = stairs[1] + stairs[2];
    dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);
    for(int i=4; i<=N; i++)
        dp[i] = max(stairs[i] + dp[i-2], stairs[i] + stairs[i-1] + dp[i-3]);
    
    cout << dp[N];

    return 0;
}