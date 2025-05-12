#include <iostream>
#include <deque>

using namespace std;

int N;
deque<int> dq;
int main() {
    cin >> N;

    for(int i = 1; i <= N; i++) {
        dq.push_front(i);
    }
    while(dq.size() != 1)
    {
        dq.pop_back();
        dq.push_front(dq.back());
        dq.pop_back();
    }
    cout << dq.front() << endl;

    return 0;
}
