//BOJ 1003 - 피보나치 함수

#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> table;

void fiboDP(int n) {
    if(table[n-2].first != 0 || table[n-2].second != 0) {
        table[n].first += table[n-2].first;
        table[n].second += table[n-2].second;
    }
    else {
        fiboDP(n-2);
        table[n].first += table[n-2].first;
        table[n].second += table[n-2].second;
    }
    if(table[n-1].first != 0 || table[n-1].second != 0) {
        table[n].first += table[n-1].first;
        table[n].second += table[n-1].second;
    }
    else {
        fiboDP(n-1);
        table[n].first += table[n-1].first;
        table[n].second += table[n-1].second;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T, N;
    vector<int> tableN;
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> N;
        tableN.push_back(N);
    }
    //table 초기화
    for(int i=0; i<41; i++)
        table.push_back(pair<int, int>(0, 0));
    table[0].first++;
    table[1].second++;

    for(int i=0; i<tableN.size(); i++) {
        //이미 존재하는 경우
        if(table[tableN[i]].first != 0 || table[tableN[i]].second != 0)
            cout << table[tableN[i]].first << " " << table[tableN[i]].second << '\n';
        else {
            fiboDP(tableN[i]);
            cout << table[tableN[i]].first << " " << table[tableN[i]].second << '\n';
        }
    }
    return 0;
}