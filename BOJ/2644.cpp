//BOJ 2644 - 촌수계산

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int visited[101], d[101];
vector<int> graph[101];

int main() {
    int p; cin >> p;
    int begin, end;
    cin >> begin >> end;
    int m; cin >> m;

    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> q;
    q.push(begin);
    visited[begin] = 1;
    while(!q.empty()) {
        int n = q.front();
        q.pop();

        for(auto next: graph[n]) {
            if(visited[next]) continue;

            q.push(next);
            visited[next] = 1;
            d[next] = d[n] + 1;
        }
    }
    if(visited[end]) cout << d[end];
    else cout << -1;

    return 0;
}