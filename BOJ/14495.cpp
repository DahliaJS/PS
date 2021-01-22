//BOJ 14495 - 피보나치 비스무리한 수열

#include <iostream>

using namespace std;

long long arr[117] = {0, 1, 1, 1, 2, };

void dp(int n) {
    if(!arr[n]) dp(n-1);

    arr[n] = arr[n-1] + arr[n-3];
}

int main() {
    int N; cin >> N;

    if(N>3) dp(N);
    cout << arr[N];

    return 0;
}