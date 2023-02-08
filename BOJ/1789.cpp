//BOJ 1789 - 수들의 합

#include <iostream>

using namespace std;

int main() {
    long long S, i = 1;
    cin >> S;

    while (S >= i)
    {
        S -= i;
        i++;
    }
    cout << i-1;

    return 0;
}