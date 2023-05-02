#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> str(n);
    for (auto &a : str)
        cin >> a;
    vector<string> vec(n, "");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            vec[j] += str[j][i];
        int var = 1;
        for (int j = 1; j < n; j++)
        {
            if (vec[j] < vec[j - 1])
            {
                var = -1;
                break;
            }
        }
        if (var == -1)
        {
            for (int j = 0; j < n; j++)
            {
                vec[j].pop_back();
            }
        }
    }
    cout << m - vec[0].size();
}