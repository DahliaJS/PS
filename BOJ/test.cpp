//BOJ 

#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int visited[101];
vector<int> graph[101];

void dfs(int n) {
    visited[n] = 1;
    for(auto next: graph[n])
        if(!visited[n]) dfs(next);
}

int main()
{
    int V=1;
    queue<int> q;
    q.push(V);
    visited[V] = 1;
    while(!q.empty()) {
        int n = q.front();
        q.pop();
        
        for(auto next: graph[n]) {
            if(visited[next]) continue;
            visited[next] = 1;
            q.push(next);
        }
    }

    return 0;
}