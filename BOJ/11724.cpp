//BOJ 11724 - 연결 요소의 개수

#include <iostream>
#include <vector>

using namespace std;

int visited[1001], cnt;
vector<int> graph[1001];

void dfs(int n) {
    visited[n] = 1;

    for(auto next: graph[n])
        if(!visited[next]) dfs(next);
}

int main() {
    int N, M;
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1; i<=N; i++) {
        if(!visited[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}