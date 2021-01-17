//BOJ 10828 - 스택

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, x;
    string input;

    cin >> N;
    stack<int> stack;
    for(int i=0; i<N; i++) {
        cin >> input;
        if(input == "push") {
            cin >> x;
            stack.push(x);
        }
        else if(input == "pop") {
            if(stack.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << stack.top() << '\n';
            stack.pop();
        }
        else if(input == "size") cout << stack.size() << '\n';
        else if(input == "empty") cout << stack.empty() << '\n';
        else if(input == "top") {
            if(stack.empty()) {
                cout << -1 << '\n';
                continue;
            }
            cout << stack.top() << '\n';
        }
    }
    return 0;
}