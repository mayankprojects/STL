// Not in a proper orderd
// TC O(1)
// implementation hash tables
// only valid data types

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare
    unordered_set<string> st;

    // initialize
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        st.insert(str);
    }
    cout << endl;

    // access
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    for (auto i : st)
    {
        cout << i << endl;
    }

    return 0;
}
