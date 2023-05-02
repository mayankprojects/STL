// map -> sorted (default) and unsorted
// map -> pairs at different memory location connected with each other

// sorted maps are implemented using red black trees
// key value pair
// key in sorted form
// key always unique

// the time complexity of both insertion and access in O(log(n))

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare
    map<int, string> m;

    // initialized
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "dss";

    // unique values only
    m[5] = "mdn";
    m[3] = "css";

    m.insert({6, "abc"});
    m.insert({7, "nda"});

    // accessing - only with help of iterators
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << endl;

    for (auto &it : m) // if it changed the value of map will change. reference
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}