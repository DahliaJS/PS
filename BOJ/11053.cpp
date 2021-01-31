//BOJ 11053 - 가장 긴 증가하는 부분 수열

#include <iostream>

using namespace std;

int arr[1001], dp[1001];

int main() {
    int N; cin >> N;
    for(int i=1; i<=N; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }
    
    int temp, mx=1;
    for(int i=2; i<=N; i++) 
        for(int j=1; j<i; j++) {
            if(arr[j] < arr[i]) {
                temp = dp[j] + 1;
                dp[i] = max(temp, dp[i]);
            }
            mx = max(mx, dp[i]);
        }

    cout << mx;
    return 0;
}