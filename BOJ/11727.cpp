//BOJ 11727 - 2xn 타일링 2

#include <iostream>

using namespace std;

unsigned long long tile[1001] = {0, 1, 3, 5, };

void dp(int n) {
    if(!tile[n]) dp(n-1);

    tile[n] = (tile[n-1] + tile[n-2] + tile[n-2]) % 10007;
}

int main() {
    int n; cin >> n;

    if(n>2) dp(n);
    cout << tile[n];

    return 0;
}