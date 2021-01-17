//BOJ 1260 - DFS와 BFS

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

bool visited[1001];
vector<int> graph[10001];

void dfs(int n) {
    cout << n << ' ';
    visited[n] = 1;
    for(auto next: graph[n])
        if(!visited[next]) dfs(next);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M, V;
    cin >> N >> M >> V;
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0; i<10001; i++)
        sort(graph[i].begin(), graph[i].end());
    dfs(V);

    cout << '\n';
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(V);
    visited[V] = 1;
    while(!q.empty()) {
        int n = q.front();
        q.pop();
        cout << n << ' ';

        for(auto next: graph[n]) {
            if(visited[next]) continue;
            visited[next] = 1;
            q.push(next);
        }
    }
    return 0;
}