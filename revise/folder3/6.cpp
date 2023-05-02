#include <iostream>
using namespace std;
void subArray(int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {24, 20, 12, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "All non-empty subArrays of the Array are:" << endl;
    subArray(arr, n);
}
