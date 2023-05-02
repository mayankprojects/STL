#include <iostream>
using namespace std;

int uniqueOccurrences(int arr[], int n)
{
    int freq[1000], cnt;
    for (int i = 0; i < n; i++)
    {
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        cnt = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = cnt;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (freq[i] == freq[j])
                {
                    return 0;
                }
            }
        }
    }

    return 1;
}
int main()
{
    // int arr[6] = {1, 2, 2, 1, 1, 3};
    // int ans;
    // ans = uniqueOccurrences(arr, 6);
    int arr[2] = {1, 2};
    int ans;
    ans = uniqueOccurrences(arr, 2);
    cout << ans;

    return 0;
}