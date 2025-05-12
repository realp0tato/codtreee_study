
#include <iostream>
#include <queue>

using namespace std;

int N, K;
queue<int> q;

int main() {
    cin >> N >> K;
    for(int i = 1; i <= N; i++) {
        q.push(i);
    }
    for(int i = 0; i <= N - 1; i++) {
        for(int j = 0; j < K - 1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
