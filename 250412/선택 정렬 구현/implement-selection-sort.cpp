#include <iostream>

using namespace std;

int n;
int arr[100];



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        int minnimum = i;
        for(int k = i+1; k < n; k++)
        {
            if(arr[k] < arr[minnimum])
                minnimum = k;
        }
        int temp = arr[i];
        arr[i] = arr[minnimum];
        arr[minnimum] = temp;
            
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
