//BOJ 11441 - 합 구하기

#include <iostream>

using namespace std;

int arr[100001], psum[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    for(int i=1; i<=N; i++)
        cin >> arr[i];

    psum[1] = arr[1];
    for(int i=2; i<=N; i++)
        psum[i] = arr[i] + psum[i-1];

    int M; cin >> M;
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        cout << psum[b] - psum[a-1] << '\n';
    }
    return 0;
}