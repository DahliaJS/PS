//BOJ 17390 - 이건 꼭 풀어야해!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, Q;
    cin >> N >> Q;
    vector<int> arr, sum;

    for (int i=0; i<N; i++)
    {
        int t; cin >> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    sum.push_back(0);
    for (int i=1; i<=N; i++)
    {
        sum.push_back(sum[i-1] + arr[i-1]);
    }

    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        cout << sum[R] - sum[L-1] << '\n';
    }


    return 0;
}