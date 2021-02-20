//BOJ 2606 - 바이러스

#include <iostream>
#include <vector>

using namespace std;

int visited[101], cnt;
vector<int> graph[101];

void dfs(int n) {
    cnt++;
    visited[n] = 1;
    for(auto next: graph[n])
        if(!visited[next]) dfs(next);
}

int main() {
    int com, n;
    cin >> com >> n;
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    dfs(1);
    cout << cnt-1;

    return 0;
}