//BOJ 10814 - 나이순 정렬 x

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, string>> members;
    pair<int, string> tmp;
    for(int i=0; i<N; i++) {
        cin >> tmp.first >> tmp.second;
        members.push_back(tmp);
    }
    sort(members.begin(), members.end(), compare);

    for(int i=0; i<members.size(); i++)
        cout << members[i].first << ' ' << members[i].second << '\n';

    return 0;
}