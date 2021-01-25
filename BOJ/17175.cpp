//BOJ 17175 - 피보나치는 지겨웡~

#include <iostream>

using namespace std;

int arr[51] = {1, 1, 3, };

void dp(int n) {
    if(!arr[n]) dp(n-1);

    arr[n] = (arr[n-1] + arr[n-2] + 1) % 1000000007;
}

int main() {
    int n; cin >> n;

    if(n>2) dp(n);
    cout << arr[n];
    return 0;
}