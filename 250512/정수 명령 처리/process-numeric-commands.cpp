// #include <iostream>

// using namespace std;

// int gcd(int a, int b){
//     int n;
//     while(b!=0){
//         n=a%b;
//         a=b;
//         b=n;
//     }
//     return a;
// }

// int main()
// {
//     int n, m;
    
//     cin >> n >> m;
    
//     cout << gcd(n, m) << endl;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// int n;
// int arr[100000];
// int merge_arr[100000];
// void merge(int low, int m, int high);
// void merge_sort(int low, int high);
// int main()
// {
//     cin >> n;
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

    

//     int high = n-1;
//     int low = 0;
//     merge_sort(low, high);
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// void merge_sort(int low, int high)
// {   if(low < high)
//     {
//         int mid = (low + high) / 2;
//         merge_sort(low, mid);
//         merge_sort(mid + 1, high);
//         merge(low, mid, high);
        
//     }

// }

// void merge(int low, int m, int high)
// {
//     int i = low;
//     int j = m + 1;
//     int k = low;

//     while(i <= m && j <= high)
//     {
//         if(arr[i] <= arr[j])
//         {
//             merge_arr[k] = arr[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             merge_arr[k] = arr[j];
//             k++;
//             j++;
//         }
//     }
//     while(i <= m)
//     {
//         merge_arr[k] = arr[i];
//         k++;
//         i++;
//     }
//     while(j <= high)
//     {
//         merge_arr[k] = arr[j];
//         k++;
//         j++;
//     }
//     for(int k = low; k<=high; k++)
//     {
//         arr[k] = merge_arr[k];
//     }
// }

// #include <iostream>

// using namespace std;
// int n;
// int arr[100000];


// int parttion(int low, int high)
// {
//     int pivot = arr[high];
//     int i = low - 1;

//     for(int j = low; j < high; j++)
//     {
//         if(arr[j] < pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quick_sort(int low, int high)
// {
//     if(low < high)
//     {
//         int pos = parttion(low, high);
//         quick_sort(low, pos - 1);
//         quick_sort(pos + 1, high);
//     }
// }

// int main()
// {
//     cin >> n;
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int low = 0;
//     int high = n - 1;
//     quick_sort(low, high);
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int n;
// int arr[100001];
// void heapify(int n, int i);
// void heap_sort(int n);

// int main() {
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         cin >> arr[i];
//     }
//     heap_sort(n);
//     for (int i = 1; i <= n; i++) {
//         cout << arr[i] << " ";
//     }
    

//     return 0;
// }

// void heapify(int n, int i)
// {
//     int largest = i;
//     int left = i * 2;
//     int right = i * 2 + 1;

//     if(left <= n && arr[left] > arr[largest])
//         largest = left;
    
//     if(right <= n && arr[right] > arr[largest])
//         largest = right;

//     if(largest != i)
//     {
//         swap(arr[i], arr[largest]);
//         heapify(n, largest);
//     }

// }

// void heap_sort(int n)
// {
//     for(int i = n/2; i >=1; i--)
//         heapify(n, i);
    
//     for(int i = n; i>1; i--)
//     {
//         swap(arr[1], arr[i]);
//         heapify(i - 1, 1);
//     }
    
// }

#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];
stack<int> s;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
            s.push(value[i]);
        }
        else if(command[i] == "pop") {
            if (!s.empty()) {
                cout << s.top() << endl;
                s.pop();
            }
            else {
                cout << -1 << endl;
            }
        }
        else if (command[i] == "size") {
            cout << s.size() << endl;
        }
        else if (command[i] == "empty") {
            cout << (s.empty() ? 1 : 0) << endl;
        }
        else if (command[i] == "top") {
            if (!s.empty()) {
                cout << s.top() << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }


    return 0;
}
