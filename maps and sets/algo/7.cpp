#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    reverse(arr, arr + n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    
    rotate(arr, arr + 1, arr + n); // rotate to right
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}