//BOJ 9625 - BABBA

#include <iostream>

using namespace std;

int A[46] = {1, 0, 1, 1, };
int B[46] = {0, 1, 1, 2, };

void dp(int n) {
    if(!B[n]) dp(n-1);

    A[n] = A[n-1] + A[n-2];
    B[n] = B[n-1] + B[n-2];
}

int main() {
    int K;
    cin >> K;

    if(K<3) cout << A[K] << ' ' << B[K];
    else {
        dp(K);
        cout << A[K] << ' ' << B[K];
    }

    return 0;
}