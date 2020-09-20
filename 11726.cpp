//BOJ 11726 - 2xn 타일링 x

#include <iostream>

using namespace std;

unsigned long long tile[1001] = {0, 1, 2, 3, };

void dp(int n) {
    if(!tile[n]) dp(n-1);

    tile[n] = tile[n-1] + tile[n-2];
}

int main() {
    int n;
    cin >> n;

    if(n>3) dp(n);
    cout << tile[n] % 10007;

    return 0;
}