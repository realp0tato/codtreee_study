#include <iostream>
using namespace std;

int main() {
    int a =1;
    int b = 5;
    int c = 3;
    a = c;
    a = a+c;
    b = b-c;
    cout << a << endl << b << endl << c << endl;
    return 0;
}