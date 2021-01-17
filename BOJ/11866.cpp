//BOJ 11866 - 요세푸스 문제 0

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    list<int> l;
    for(int i=0; i<N; i++)
        l.push_back(i+1);
    
    list<int>::iterator iter=l.begin();
    vector<int> p;
    while(!l.empty()) {
        //iter가 begin일떄는 K-1번 돌아야하고 나머지는 erase하면서 iter가 하나 넘어가므로 모두 K-1번
        for(int i=0; i<K-1; i++) {
            //1. for 도중 iter가 end가 됐을 때
            if(iter == l.end()) iter = l.begin();
            iter++;
        }
        //2. 마지막에 iter가 end가 됐을 때 -> end를 지우므로 begin을 지우게함
        if(iter == l.end()) iter = l.begin();
        p.push_back(*iter);
        iter = l.erase(iter);
    }
    
    cout << '<';
    for(int i=0; i<p.size(); i++) {
        if(i == p.size()-1) {
            cout << p[i] << '>';
            break;
        }
        cout << p[i] << ", ";
    }
    
    return 0;
}