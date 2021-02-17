//BOJ 1912 - 연속합

#include <iostream>

using namespace std;

int arr[100001], dp[100001];

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    dp[0] = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] >= dp[i-1] + arr[i])
            dp[i] = arr[i];
        else
            dp[i] = dp[i-1] + arr[i];
    }

    int mx = -1001;
    for(int i=0; i<n; i++) 
        mx = max(mx, dp[i]);
    
    cout << mx;
    return 0;
}