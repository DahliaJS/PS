//BOJ 7576 - 토마토

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int graph[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    int M, N;
    cin >> M >> N;
    queue<pair<int, int>> q;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> graph[i][j];
            if(graph[i][j] == 1) q.push({i, j});
        }
    }
    
    int ans = 0;
    while(!q.empty()) {
        int size = q.size();
        bool is_tomato = false;
        for(int i=0; i<size; i++) {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            for(int i=0; i<4; i++) {
                if(x+dx[i] < 0 || x+dx[i] == N ||
                y+dy[i] < 0 || y+dy[i] == M)
                    continue;
                if(graph[x+dx[i]][y+dy[i]] != 0) continue;
                is_tomato = true;
                graph[x+dx[i]][y+dy[i]] = 1;
                q.push({x+dx[i], y+dy[i]});
            }
        }
        if(is_tomato) ans++;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(!graph[i][j]) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << ans;

    return 0;
}