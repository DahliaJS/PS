//BOJ 2851 - 슈퍼 마리오

#include <iostream>

using namespace std;

int main() {
    int sum = 0, mn = -101;

    for (int i=0; i<10; i++)
    {
        int t;
        cin >> t;
        sum += t;
        if (abs(sum - 100) <= abs(mn - 100))
        {
            mn = sum;
        }
    }
    cout << mn;

    return 0;
}