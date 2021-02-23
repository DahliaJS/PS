//BOJ 1012 - 유기농 배추

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int ground[50][50];
int visited[50][50];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int M, N, K, ans;

void bfs(int y, int x) {
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    while(!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for(int i=0; i<4; i++) {
            int _y = y + dy[i];
            int _x = x + dx[i];
            if(_y >= 0 && _x >= 0 && _y < N && _x < M)
                if(ground[_y][_x] == 1 && !visited[_y][_x]) {
                    q.push(make_pair(_y, _x));
                    visited[_y][_x] = 1;
                }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    for(int t=0; t<T; t++) {
        cin >> M >> N >> K;
        memset(ground, 0, sizeof(ground));
        memset(visited, 0, sizeof(visited));
        for(int i=0; i<K; i++) {
            int X, Y;
            cin >> X >> Y;
            ground[Y][X] = 1;
        }

        for(int i=0; i<N; i++) 
            for(int j=0; j<M; j++) 
                if(ground[i][j] == 1 && !visited[i][j]) {
                    bfs(i, j);
                    ans++;
                }
            
        cout << ans << '\n';
        ans = 0;
    }

    return 0;
}