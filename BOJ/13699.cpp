//BOJ 13699 - 점화식

#include <iostream>

using namespace std;

unsigned long long t[36] = {1, };

void dp(int n) {
    if(!t[n]) dp(n-1);

    for(int i=0; i<n; i++)
        t[n] += t[i] * t[n-1-i];
}

int main() {
    int n; cin >> n;

    dp(n);
    cout << t[n];
    return 0;
}