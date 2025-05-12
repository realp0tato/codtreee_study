
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int num[10000];
deque<int> dq;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
            if(cmd[i] == "push_front") {
                dq.push_front(num[i]);
            } else {
                dq.push_back(num[i]);
            }
        }
        else if(cmd[i] == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else {
                cout << -1 << endl;
            }
        }
        else if(cmd[i] == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
                dq.pop_back();
            } else {
                cout << -1 << endl;
            }
        }
        else if(cmd[i] == "size") {
            cout << dq.size() << endl;
        }
        else if(cmd[i] == "empty") {
            cout << (dq.empty() ? 1 : 0) << endl;
        }
        else if(cmd[i] == "front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
            } else {
                cout << -1 << endl;
            }
        }
        else if(cmd[i] == "back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
