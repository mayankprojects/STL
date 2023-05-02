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
    int *it1 = min_element(arr, arr + n);
    cout << *it1 << endl;

    int *it2 = max_element(arr, arr + n);
    cout << *it2 << endl;

    int max = accumulate(arr, arr + n, 0);
    cout << max << endl;

    int ct = count(arr, arr + n, 2);
    cout << ct << endl;
    
    int *it3 = find(arr, arr + n, 3);
    if (it3 != arr + n)
        cout << *it3 << endl;
    else
        cout << "element not found" << endl;

    return 0;
}