//BOJ 7568 - 덩치

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, k, w, h;
    vector<pair<int, int>> v;

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> w >> h;
        v.push_back(pair<int, int>(w, h));
    }

    for(int i=0; i<v.size(); i++) {
        k=1;
        for(int j=0; j<v.size(); j++) {
            if(v[i].first < v[j].first && v[i].second < v[j].second) k++;
        }
        cout << k << " ";
    }
    return 0;
}