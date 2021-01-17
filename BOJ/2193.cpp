//BOJ 2193 - 이친수

#include <iostream>

using namespace std;

long long arr[91] = {0, 1, 1, 2, };

void dp(int n) {
    if(!arr[n]) dp(n-1);

    arr[n] = arr[n-1] + arr[n-2];
}

int main() {
    int N;
    cin >> N;

    if(N>2) dp(N);
    cout << arr[N];

    return 0;
}