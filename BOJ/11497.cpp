//BOJ 11497 - 통나무 건너뛰기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[10000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for(int t=0; t<T; t++) {
        vector<int> logs;
        int N, h;
        cin >> N;
        for(int i=0; i<N; i++) {
            cin >> h;
            logs.push_back(h);
        }
        sort(logs.begin(), logs.end(), greater<int>());

        for(int i=0; i<10000; i++)
            arr[i] = 0;
        int cursor = 5000;
        int max = 0;
        for(int i=0; i<logs.size(); i++) {
            if(i%2) cursor += i;
            else cursor += -i;

            arr[cursor] = logs[i];

            if(i%2 && max < arr[cursor-1] - arr[cursor]) max = arr[cursor-1] - arr[cursor];
            else if(!(i%2) && max < arr[cursor+1] - arr[cursor]) max = arr[cursor+1] - arr[cursor];
        }
        cout << max << '\n';
        logs.clear();
    }
    return 0;
}