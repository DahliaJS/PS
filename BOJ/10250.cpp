//BOJ 10250 - ACM 호텔

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T, H, W, N;
    cin >> T;
    int ho;
    for(int i=0; i<T; i++) {
        cin >> H >> W >> N;

        if(N%H == 0)
            ho = H*100 + N/H;
        else
            ho = N%H*100 + 1 + N/H;

        cout << ho << '\n';
    }

    return 0;
}