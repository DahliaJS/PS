//BOJ 11399 - ATM

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, t;
    cin >> N;

    vector<int> p;
    for(int i=0; i<N; i++) {
        cin >> t;
        p.push_back(t);
    }
    sort(p.begin(), p.end());

    int sum=0, min=0;
    for(int i=0; i<p.size(); i++) {
        sum += p[i];
        min += sum;
    }
    cout << min;


    return 0;
}