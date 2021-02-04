//BOJ 4811 - 알약

#include <iostream>

using namespace std;

unsigned long long dp[31] = {1, 1, 2, };

int main() {
    for(int i=3; i<=31; i++)
        for(int j=0; j<i; j++)
            dp[i] += dp[j] * dp[i-j-1];
    
    int T;
    while(true) {
        cin >> T;
        if(!T) break;

        cout << dp[T] << '\n';
    }
    return 0;
}