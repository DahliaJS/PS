//BOJ 2217 - 로프

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ans = 0;
    vector<int> rope;
    cin >> N;

    for (int i=0; i<N; i++)
    {
        int r;
        cin >> r;
        rope.push_back(r);
    }
    sort(rope.begin(), rope.end(), comp);
    
    for (int i=0; i<N; i++)
    {
        if (ans < rope[i] * (N-i))
            ans = rope[i] * (N-i);
    }
    cout << ans;

    return 0;
}