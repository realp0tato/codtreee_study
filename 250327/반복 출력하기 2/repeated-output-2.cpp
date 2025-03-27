#include <iostream>

using namespace std;

int N;

void print_hello(int n)
{
    if(n == 0)
        return;
    print_hello(n-1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;
    print_hello(N);
    

    return 0;
}