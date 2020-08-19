//BOJ 2644 - 촌수계산 x

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[100];
vector<int> graph[100];

int main() {
    int n, begin, end, c, a, b;
    cin >> n >> begin >> end >> c;
    for(int i=0; i<c; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<int> q;
    q.push(begin);
    visited[begin] = 1;

    int chon=0;
    bool target = false;
    while(!q.empty()) {
        if(target) break;
        int idx = q.front();
        q.pop();

        for(auto next: graph[idx]) {
            if(visited[next]) continue;
            visited[next] = 1;
            q.push(next);
            if(next == end) {
                chon++;
                target=true;
                cout << "oh" << endl;
                break;
            }
            if(next == *(graph[idx].rbegin())) {
                chon++;
                cout << "no" << next << " " << idx << endl;
            }
        }
    }
    if(target) cout << chon;
    else cout << -1;

    return 0;
}