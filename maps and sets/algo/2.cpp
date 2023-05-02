#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // address of first element and next element of last address
    sort(arr, arr + n);  //uses introsort -> mixture of three techniques (heap sort, quick sort, insertion sort)
                         // if sorted the complexity -> O(log(n))  else TC -> O(n)

    cout << binary_search(arr, arr + n, 3) << endl; // Element present or not
    
    // if element present -> return same address, if not return address of next bigeer num
    int *ptr = lower_bound(arr, arr + n, 3);
    cout << *ptr << endl;

    // if element present -> return address of next bigger number, else also return address of next bigger num
    int *ptr1 = upper_bound(arr, arr + n, 3);
    cout << *ptr1 << endl;

    return 0;
}