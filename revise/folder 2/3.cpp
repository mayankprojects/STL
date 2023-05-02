#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int flag, ans;
    for (int i = 0; i < size; i++)
    {
        flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            ans = arr[i];
        }
    }

    return ans;
}

int main()
{
    int arr[11] = {5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8};
    int ans;
    ans = findUnique(arr, 11);
    cout << "ans = " << ans;
    return 0;
}