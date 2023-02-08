//BOJ 5585 - 거스름돈

#include <iostream>

using namespace std;

int main() {
    int n, coin = 500, cnt = 0, i = 1;
    cin >> n;
    n = 1000 - n;

    while (coin)
    {
        cnt += n / coin;
        n = n % coin;
        if (i > 0) 
            coin = coin / 5;
        else
            coin = coin / 2;
        i = i * -1;
    }
    cout << cnt;

    return 0;
}