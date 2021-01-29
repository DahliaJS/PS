//BOJ 1934 - 최소공배수

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return a%b ? gcd(b, a%b) : b;
}

int lcm(int a, int b) {
    return a*b / gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    for(int i=0; i<T; i++) {
        int A, B;
        cin >> A >> B;
        cout << lcm(A, B) << '\n';
    }
    return 0;
}