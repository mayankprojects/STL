#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, ele;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    cout << endl;

    sort(v.begin(), v.end()); // needed to be sorted here

    cout << binary_search(v.begin(), v.end(), 4) << endl; // element present or not

    // if element present -> return same iterator, if not return iterator of next bigeer num
    auto it1 = lower_bound(v.begin(), v.end(), 4);
    cout << *it1 << endl;
    cout << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl; // gives lower bound element index

    cout << endl;

    // if element present -> return iterator of next bigger number, else also return iterator of next bigger num
    auto it2 = upper_bound(v.begin(), v.end(), 4);
    cout << *it2 << endl;
    cout << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl; // gives upper bound element index

    return 0;
}