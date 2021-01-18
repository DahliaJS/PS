//BOJ 15921 - 수찬은 마린보이야!!

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int cnt[101];

int main() {
    cout << fixed;
    cout.precision(2);
    int N, t;
    vector<int> pr;
    double avg=0;
    cin >> N;
    if (N==0) {
        cout << "divide by zero";
        return 0;
    }

    for(int i=0; i<N; i++) {
        cin >> t;
        pr.push_back(t);
        avg += pr[i];
        cnt[pr[i]]++;
    }
    avg = avg / N;
    
    sort(pr.begin(), pr.end());
    pr.erase(unique(pr.begin(), pr.end()), pr.end());

    double val=0;
    for(int i: pr) 
        val += i * (cnt[i] / (double)N);
    
    double result = round((avg / val) * 100) / 100;
    cout << result;
    return 0;
}