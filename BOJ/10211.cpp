//BOJ 10211 - Maximum Subarray

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    int N;
    vector<int> arr;
    for (int t=0; t<T; t++)
    {
        int temp = -987654321;
        int result = -987654321;
        cin >> N;
        arr.clear();
        arr.push_back(temp);
        for (int i=1; i<=N; i++)
        {
            int a; cin >> a;
            temp = max(a, arr[i-1] + a);
            arr.push_back(temp);
            result = max(result, arr[i]);
        }
        cout << result << '\n';
    }


    return 0;
}