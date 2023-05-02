// iterators -> In some of the containners we are not able to access the values directly. Hence we use iterators.
// Iterators are like pointers that points the elements of the containers
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    vector<int>::iterator it; // Iterator decleretion
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " "; // data accessed like pointers
    }

    cout << endl;

    for (auto j = v.begin(); j != v.end(); j++) // if auto keyword used then no need to declared iterator
    {
        cout << *j << " "; // data accessed like pointers
    }

    // i++ -> next iterator
    // i = i + 1 -> next location   (wrong if memory not continous)

    cout << endl
         << endl;
    for (auto i : v) // i is copy of the value
    {
        i++;
        cout << i << " ";
    }

    cout << endl;
    print(v); // the vector will not be affected

    cout << endl;

    for (auto &i : v) // i is the reference of the value
    {
        i++;
        cout << i << " ";
    }
    cout << endl;
    print(v); // the vector will be afected

    return 0;
}