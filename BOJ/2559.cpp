//BOJ 2559 - 수열

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, sum = 0, ans = -987654321;
    vector<int> arr;
    cin >> N >> K;
    for (int i=0; i<N; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);

        if (i < K)
        {
            sum += t;
            ans = sum;
        }
        else
        {
            sum += t;
            sum -= arr[i-K];

            if (sum > ans)
                ans = sum;
        }
        
    }
    cout << ans;

    return 0;
}