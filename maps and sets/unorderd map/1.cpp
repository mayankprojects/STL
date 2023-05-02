/*
The main difference is:-
1) key is in unorderd form
2) implementation is done using hash table
3) TC is O(1)
4) valid datatypes only (not pairs)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, string> mp;
    mp[1] = "abc";
    mp[5] = "sdsd";
    mp[2] = "def";
    mp[8] = "dsd";
    mp[2] = "xzy";

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}