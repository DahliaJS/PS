//BOJ 1764 - 듣보잡

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<string> D, B, DB;
    string s;
    int N, M;
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        cin >> s;
        D.push_back(s);
    }
    for(int i=0; i<M; i++) {
        cin >> s;
        B.push_back(s);
    }

    int cnt=0;
    vector<string>::iterator iter;
    if(N>M) {
        for(int i=0; i<M; i++) {
            iter = find(D.begin(), D.end(), B[i]);
            if(iter != D.end()) {
                DB.push_back(*iter);
                cnt++;
            }
        }
    }
    else {
        for(int i=0; i<N; i++) {
            iter = find(B.begin(), B.end(), D[i]);
            if(iter != B.end()) {
                DB.push_back(*iter);
                cnt++;
            }
        }
    }
    sort(DB.begin(), DB.end());
    cout << cnt << '\n';
    for(int i=0; i<DB.size(); i++)
        cout << DB[i] << '\n';
    return 0;
}