//BOJ 10866 - 덱

#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, x;
    string input;

    cin >> N;
    deque<int> deque;
    for(int i=0; i<N; i++) {
        cin >> input;
        if(input == "push_front") {
            cin >> x;
            deque.push_front(x);
        }
        else if(input == "push_back") {
            cin >> x;
            deque.push_back(x);
        }
        else if(input == "pop_front") {
            if(deque.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << deque.front() << '\n';
            deque.pop_front();
        }
        else if(input == "pop_back") {
            if(deque.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << deque.back() << '\n';
            deque.pop_back();
        }
        else if(input == "size") cout << deque.size() << '\n';
        else if(input == "empty") cout << deque.empty() << '\n';
        else if(input == "front") {
            if(deque.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << deque.front() << '\n';
        }
        else if(input == "back") {
            if(deque.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << deque.back() << '\n';
        }
    }
    return 0;
}