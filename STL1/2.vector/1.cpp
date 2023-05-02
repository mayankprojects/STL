#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    // access
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl; 

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }

    cout << endl;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
}
int main()
{
    // declare
    vector<int> v;

    int sz, ele;
    cin >> sz;

    // intialize
    for (int i = 0; i < sz; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    display(v);
    return 0;
}