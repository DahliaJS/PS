//BOJ 1026 - 보물

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    vector<int> A, B;
    int N, S=0;
    cin >> N;
    for(int i=0; i<N; i++) {
        int a; cin >> a;
        A.push_back(a);
    }
    for(int i=0; i<N; i++) {
        int b; cin >> b;
        B.push_back(b);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), compare);

    for(int i=0; i<N; i++) {
        S += A[i] * B[i];
    }
    cout << S;
    return 0;
}