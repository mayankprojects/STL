#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare
    map<int, string> mp;

    // initialize
    string str;    
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        cin >> str;
        mp[num] = str;
    }

//find
    // finds function returns an iterator point to the element assocaited with a particular key 
    // if the element if not found then it will return end iterator 
    auto it = mp.find(5); // O(log(n))
    if (it == mp.end())
        cout << "noting at key 5";
    else
        cout << "element at 5 is" << endl;
    cout << (*it).first << " " << (*it).second;

    cout << endl
         << endl;

//erase
    // erase function takes either key value or iterator as input and deletes the value
    mp.erase(3); // O(log(n))
    auto it1 = mp.find(5);
    if (it1 != mp.end())
        mp.erase(it1);

//accessing
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}