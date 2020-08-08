//BOJ 10845 - 큐

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, x;
    string input;

    cin >> N;
    queue<int> queue;
    for(int i=0; i<N; i++) {
        cin >> input;
        if(input == "push") {
            cin >> x;
            queue.push(x);
        }
        else if(input == "pop") {
            if(queue.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << queue.front() << '\n';
            queue.pop();
        }
        else if(input == "size") cout << queue.size() << '\n';
        else if(input == "empty") cout << queue.empty() << '\n';
        else if(input == "front") {
            if(queue.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << queue.front() << '\n';
        }
        else if(input == "back") {
            if(queue.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << queue.back() << '\n';
        }
    }
    return 0;
}