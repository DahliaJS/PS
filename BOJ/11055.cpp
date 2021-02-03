//BOJ 11055 - 가장 큰 증가 부분 수열

#include <iostream>

using namespace std;

int arr[1001], dp[1001];

int main() {
    int N; cin >> N;
    for(int i=1; i<=N; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
    }
        
    int mx = dp[1];
    for(int i=2; i<=N; i++) 
        for(int j=1; j<i; j++) {
            if(arr[j] < arr[i]) 
                dp[i] = max(dp[i], dp[j] + arr[i]);
            
            mx = max(mx, dp[i]);
        }

    cout << mx;
    for(int i=0; i<=N; i++)
        cout << dp[i] << ' ';
    return 0;
}