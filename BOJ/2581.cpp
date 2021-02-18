//BOJ 2581 - 소수

#include <iostream>

using namespace std;

int sum, mn = 10001;

int main() {
    int M, N;
    cin >> M >> N;

    bool isPN;
    for(int i=M; i<=N; i++) {
        if(i == 1) continue;
        isPN = true;
        for(int j=2; j*j<=i; j++) {
            if(i%j == 0) {
                isPN = false;
                break;
            }
        }
        if(isPN) {
            sum += i;
            mn = min(mn, i);
        }
    }

    if(mn == 10001) cout << -1;
    else cout << sum << '\n' << mn;

    return 0;
}