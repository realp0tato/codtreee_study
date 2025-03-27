#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int f(int n)
{
    if(n==0)
        return arr[0];
    
    return max(f(n-1), arr[n]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << f(n-1);

    return 0;
}

// 1 5 7 9 2 6