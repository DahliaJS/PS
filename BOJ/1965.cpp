//BOJ 1965 - 상자넣기

#include <iostream>

using namespace std;

int box[1001], cnt[1001];

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++) cin >> box[i];

    int r=0;
    for(int i=0; i<n; i++) {
        cnt[i] = 1;
        for(int j=0; j<i; j++) {
            if(box[i] > box[j] && cnt[j]+1 > cnt[i])
                cnt[i] = cnt[j] + 1;
        }
        r = max(r, cnt[i]);
    }
    cout << r;

    return 0;
}