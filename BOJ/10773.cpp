//BOJ 10773 - 제로

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int K, tmp, sum=0;
    vector<int> v;
    cin >> K;
    for(int i=0; i<K; i++) {
        cin >> tmp;
        if(!tmp)
            v.pop_back();
        else
            v.push_back(tmp);
    }
    for(int i=0; i<v.size(); i++) 
        sum += v[i];
    
    cout << sum;
    return 0;
}