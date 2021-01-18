//BOJ 9461 - 파도반 수열

#include <iostream>

using namespace std;

long long series[101] = {1, 1, 1, 2, 2, 3, 4, 5, 7, };

void dp(int N) {
    if(!series[N]) dp(N-1);

    series[N] = series[N-1] + series[N-5];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T, N;
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> N;
        if(series[N-1]) {
            cout << series[N-1] << '\n';
            continue;
        }
        dp(N-1);
        cout << series[N-1] << '\n';
    }

    return 0;
}