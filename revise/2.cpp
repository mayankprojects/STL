#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    int l = 0, r = n - 1, mid;
    while (l <= r)
    {
        // mid = (l + r) / 2;
        // optimization to prevent out of range error
        mid = l + ((r - l) / 2);
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5}, key, ans;
    cin >> key;
    ans = search(arr, 5, key);
    if (ans == -1)
        cout << "Element not found";
    else
        cout << "Element at " << ans;

    return 0;
}