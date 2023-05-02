#include <iostream>
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
    int maxi = arr[0], mini = arr[0];

    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
        // if (arr[i] > max)
        //     max = arr[i];
        // else if (arr[i] < min)
        //     min = arr[i];
    }

    cout << maxi << " and " << mini;
    return 0;
}