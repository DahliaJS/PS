//BOJ 2435 - 기상청 인턴 신현수

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> temp;
    int current_max = 0;
    int result;

    for (int i=0; i<N; i++)
    {
        int t;
        cin >> t;
        temp.push_back(t);

        if (i < K)
        {
            current_max += t;
            result = current_max;
        }
        else
        {
            current_max += t;
            current_max -= temp[i-K];
            if (current_max > result)
                result = current_max;
        }
    }

    cout << result;

    return 0;
}