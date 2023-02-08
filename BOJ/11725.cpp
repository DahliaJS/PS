//BOJ 11725 - 트리의 부모 찾기

#include <iostream>
#include <vector>

using namespace std;

vector<int> tree[100001];
int visited[100001];
int ans[100001];

void DFS(int n) {
    visited[n] = 1;

    for(auto next: tree[n])
    {
        if (!visited[next])
        {
            ans[next] = n;
            DFS(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i=0; i<N-1; i++)
    {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    DFS(1);

    for (int i=2; i<=N; i++)
        cout << ans[i] << '\n';

    return 0;
}