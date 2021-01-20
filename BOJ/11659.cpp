//BOJ 11659 - 구간 합 구하기 4

#include <iostream>

using namespace std;

int arr[100001], psum[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++) 
        cin >> arr[i];

    psum[0] = arr[0];
    for(int i=1; i<N; i++) 
        psum[i] = arr[i] + psum[i-1];
    
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        cout << psum[b-1] - psum[a-2] << '\n';
    }

    return 0;
}