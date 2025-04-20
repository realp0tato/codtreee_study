#include <iostream>

using namespace std;

int n;
int arr[100];

int max_value(int n)
{
    if(n == 0)
        return arr[0];
    
    
    return max(max_value(n-1), arr[n]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << max_value(n-1);

    return 0;
}