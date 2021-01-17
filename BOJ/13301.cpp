//BOJ 13301 - 타일 장식물

#include <iostream>

using namespace std;

unsigned long long tile[81] = {0, 1, 1, 2, 3, 5, 8, };

void dp(int n) {
    if(!tile[n]) dp(n-1);

    tile[n] = tile[n-1] + tile[n-2];
}

int main() {
    int N;
    cin >> N;

    if(N<3) cout << tile[N]*2 + (tile[N] + tile[N-1])*2;
    else {
        dp(N);
        cout << tile[N]*2 + (tile[N] + tile[N-1])*2;
    }


    return 0;
}