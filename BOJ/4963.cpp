//BOJ 4963 - 섬의 개수

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int map[50][50];
int visited[50][50];
int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int w, h, ans;

void bfs(int y, int x) {
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    while(!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for(int i=0; i<8; i++) {
            int _y = y + dy[i];
            int _x = x + dx[i];
            if(_y >= 0 && _x >= 0 && _y < h && _x < w)
                if(map[_y][_x] == 1 && !visited[_y][_x]) {
                    q.push(make_pair(_y, _x));
                    visited[_y][_x] = 1;
                }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while(true) {
        cin >> w >> h;
        if(!(w || h)) break;
        
        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));
        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++)
                cin >> map[i][j];

        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++)
                if(map[i][j] == 1 && !visited[i][j]) {
                    bfs(i, j);
                    ans++;
                }
        
        cout << ans << '\n';
        ans = 0;
    }

    return 0;
}