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

#include <iostream>

using namespace std;
int n;
int arr[100000];


int parttion(int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(int low, int high)
{
    if(low < high)
    {
        int pos = parttion(low, high);
        quick_sort(low, pos - 1);
        quick_sort(pos + 1, high);
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0;
    int high = n - 1;
    quick_sort(low, high);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}