//BOJ 1931 - 회의실 배정

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) return a.first < b.first;
    
    return a.second < b.second;
}

int main() {
    int N, cnt=0;
    vector<pair<int, int>> meeting;

    cin >> N;
    for(int i=0; i<N; i++) {
        int b, e;
        cin >> b >> e;
        meeting.push_back(pair<int, int>(b, e));
    }

    sort(meeting.begin(), meeting.end(), cmp);

    int end=-1;
    for(int i=0; i<N; i++) 
        if(meeting[i].first >= end) {
            end = meeting[i].second;
            cnt++;
        }
    
    cout << cnt;
    
    return 0;
}