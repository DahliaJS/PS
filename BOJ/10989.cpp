//BOJ 10989 - 수 정렬하기 3

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cnt[10001] = {0, };
    int N, x;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> x;
        cnt[x]++;
    }

    for(int i=1; i<10001; i++) {
        if(!cnt[i]) continue;
        for(int j=0; j<cnt[i]; j++) cout << i << '\n';
    }
    return 0;
}