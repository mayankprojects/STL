// same as map but only it has set of keys
// does not have st[key]
// implementation - red black trees
// Time complexity - O(log(n))

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare
    set<string> st;

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

    // find and erase
    auto it1 = st.find("abc");
    if (it1 != st.end())
    {
        st.erase(it1);
    }

    cout << endl;

    for (auto i : st)
    {
        cout << i << endl;
    }

    return 0;
}