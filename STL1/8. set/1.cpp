#include <iostream>
#include <set>
// Implemented using BST
// Sorted order
// only unique element
using namespace std;

void display(set<int> &s)
{
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    display(s);

    // iterator Shit

    // s.erase(s.begin() + 2);  error
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    display(s);

    cout << "if 5 is present- " << s.count(5) << endl;

    set<int>::iterator it1 = s.find(5);
    cout << *it1 << endl;

    for (auto it = it1; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}