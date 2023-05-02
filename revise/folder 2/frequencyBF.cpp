#include <iostream>
using namespace std;

int main()
{
    int arr[100], freq[1000] = {0};
    int n, cnt;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cnt = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                freq[j] = -1;
            }
        }
        if (freq[i] != -1)
        {
            freq[i] = cnt;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[i] != -1)
            cout << arr[i] << "-" << freq[i] << endl;
    }

    return 0;
}