//BOJ 1764 - 듣보잡

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    set<string> DB;
    vector<string> output;
    string s;
    int N, M, cnt=0;
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        cin >> s;
        DB.insert(s);
    }

    set<string>::iterator iter;
    for(int i=0; i<M; i++) {
        cin >> s;
        iter = DB.find(s);
        if(iter != DB.end()) {
            cnt++;
            output.push_back(*iter);
        }
    }
    
    sort(output.begin(), output.end());
    cout << cnt << '\n';
    for(int i=0; i<output.size(); i++)
        cout << output[i] << '\n';

    return 0;
}