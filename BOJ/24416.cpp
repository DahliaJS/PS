//BOJ 24416 - 알고리즘 수업 - 피보나치 수 1

#include <iostream>

using namespace std;

int c1;

int fib(int n) {
    if (n == 1 || n == 2)
    {
        c1++;
        return 1;
    }
    else return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;

    fib(n);
    cout << c1 << ' ' << n-2;

    return 0;
}