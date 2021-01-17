//BOJ 11050 - 이항 계수 1

#include <iostream>

using namespace std;

int fact(short a) {
    int f=1;
    for(int i=1; i<=a; i++)
        f *= i;

    return f;
}

int main() {
    short N, K;
    cin >> N >> K;

    cout << fact(N) / (fact(K) * fact(N-K));
    return 0;
}