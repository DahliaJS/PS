//BOJ 13270 - 피보나치 치킨

#include <iostream>

using namespace std;

int mx[30000] = {0, 0, 1, 2, 2, };
int mn[30000] = {0, 0, 1, 2, 2, };

int main() {
    int N;
    cin >> N;

    for(int i=5; i<=N; i++)
    {
        mx[i] = max(mx[i-2] + mx[2], mx[i-3] + mx[3]);
        mn[i] = min(mn[i-2] + mn[2], mn[i-3] + mn[3]);
    }
    cout << mn[N] << ' ' << mx[N];
        
    return 0;
}