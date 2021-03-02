//BOJ 1965 - 상자넣기

#include <iostream>

using namespace std;

int box[1001], dp[1001];

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++) 
        cin >> box[i];

    int cnt=0;
    for(int i=0; i<n; i++) {
        dp[i] = 1;
        for(int j=0; j<i; j++) {
            if(box[i] > box[j] && dp[j]+1 > dp[i])
                dp[i] = dp[j] + 1;
        }
        cnt = max(cnt, dp[i]);
    }
    cout << cnt;

    return 0;
}