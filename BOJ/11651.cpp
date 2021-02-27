//BOJ 11650 - 좌표 정렬하기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) return a.first < b.first;

    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    pair<int, int> p;
    vector<pair<int, int>> point;

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> p.first >> p.second;
        point.push_back(p);
    }
    sort(point.begin(), point.end(), compare);

    for(int i=0; i<point.size(); i++)
        cout << point[i].first << ' ' << point[i].second << '\n';
    
    return 0;
}