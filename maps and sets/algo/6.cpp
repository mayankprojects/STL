#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int ele, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;

    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end()); // rotate to right
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}