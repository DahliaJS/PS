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
    if(!(0 || 0)) cout << "ho";

    return 0;
}