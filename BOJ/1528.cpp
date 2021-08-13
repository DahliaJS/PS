//BOJ 1528 - 금민수의 합

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int visited[1000001];

int main() {
    int N;
    cin >> N;

    vector<int> KMS;
    KMS.push_back(4);
    KMS.push_back(7);

    for (int i=0; KMS[i]<100000; i++)
    {
        KMS.push_back(KMS[i] * 10 + 4);
        KMS.push_back(KMS[i] * 10 + 7);
    }
    
    queue<int> q;
    q.push(KMS[0]);
    visited[4] = 0;
    while (!q.empty())
    {
        int n = q.front();
        q.pop();

        for (auto next: 그래프>???)
    }

    return 0;
}