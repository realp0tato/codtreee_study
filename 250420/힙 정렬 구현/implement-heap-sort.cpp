#include <iostream>

using namespace std;

int n;
int arr[100001];
void heapify(int n, int i);
void heap_sort(int n);

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    heap_sort(n);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}

void heapify(int n, int i)
{
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if(left <= n && arr[left] > arr[largest])
        largest = left;
    
    if(right <= n && arr[right] > arr[largest])
        largest = right;

    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(n, largest);
    }

}

void heap_sort(int n)
{
    for(int i = n/2; i >=1; i--)
        heapify(n, i);
    
    for(int i = n; i>1; i--)
    {
        swap(arr[1], arr[i]);
        heapify(i - 1, 1);
    }

}