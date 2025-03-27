#include <iostream>

using namespace std;

int n;
int arr[10];
int get_num = 1;

int gcd(int n, int m)
{
    int temp;
    while( m != 0)
    {
        temp = n%m;
        n = m;
        m = temp;
    }
    return n;
}
// 1 5 9 2 6

int lcm(int n, int m)
{
    return n*m / gcd(n, m);
}

int f(int n)
{
    
    for(int i = 0; i < n; i++)
    {
        get_num = lcm(get_num, arr[i]);
    }
    return get_num;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << f(n);

    return 0;
}