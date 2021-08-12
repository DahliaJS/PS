//BOJ 11653 - 소인수분해

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;

    int i=2;
    while (N != 1)
    {
        if (N % i == 0)
        {
            cout << i << '\n';
            N = N / i;
        }
        else
            i++;
    }

    return 0;
}