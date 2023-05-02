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

    auto it1 = min_element(v.begin(), v.end());
    cout << *it1 << endl;

    auto it2 = max_element(v.begin(), v.end());
    cout << *it2 << endl;

    int max = accumulate(v.begin(), v.end(), 0);
    cout << max << endl;

    int ct = count(v.begin(), v.end(), 2);
    cout << ct << endl;
    
    auto it3 = find(v.begin(), v.end(), 3);
    if (it3 != v.end())
        cout << *it3 << endl;
    else
        cout << "element not found" << endl;

    return 0;
}