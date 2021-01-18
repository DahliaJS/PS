//BOJ 2805 - 나무 자르기

#include <iostream>
#include <vector>

using namespace std;

int N, M, mx;
long long result;
vector<int> logs;

int logging(int begin, int end) {
    int mid = (begin + end) / 2;
    long long total = 0;
    for(auto i: logs) {
        if(mid >= i) continue;
        total += i - mid;
    }

    if(total == M || end - begin == 1)
        return mid;
    if(total < M) result = logging(begin, mid);
    else result = logging(mid, end);

    return result;
}

int main() {
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        int t;
        cin >> t;
        logs.push_back(t);
        if(mx < t) mx = t;
    }
    result = logging(0, mx);

    cout << result;

    return 0;
}