//BOJ 9095 - 1, 2, 3 더하기

#include <iostream>

using namespace std;

int answer[12];

void dp(int n) {
    if(!answer[n-1]) {
        dp(n-1);
        answer[n] = answer[n-1] + answer[n-2] + answer[n-3];
    }
    else
        answer[n] = answer[n-1] + answer[n-2] + answer[n-3];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    answer[1] = 1;
    answer[2] = 2;
    answer[3] = 4;

    int T, n;
    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> n;
        if(answer[n]) cout << answer[n] << '\n';
        else {
            dp(n);
            cout << answer[n] << '\n';
        }
    }

    return 0;
}