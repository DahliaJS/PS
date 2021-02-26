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
bool pn[100];

void dfs(int n) {
    visited[n] = 1;
    for(auto next: graph[n])
        if(!visited[n]) dfs(next);
}

int main()
{   
    string s = to_string(6661);
    for(int i=0; i<s.size()/2; i++) {
        if(s[i] == s[s.size()-1-i]) cout << s[i];
    }

    return 0;
}