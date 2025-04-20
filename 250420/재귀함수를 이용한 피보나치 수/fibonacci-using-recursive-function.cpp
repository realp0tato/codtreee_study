#include <iostream>

using namespace std;

int N;

int pibo(int n)
{
    if(n ==1 || n == 2)
        return 1;

    return pibo(n-1) + pibo(n-2);
}
int main() {
    cin >> N;

    cout << pibo(N);
    return 0;
}