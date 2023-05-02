#include <iostream>
#include <list> // doubly linked list
using namespace std;

void display(list<int> &l)
{
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    list<int> l2(5, 100); // 5 elements with 100 data
    list<int> l3(l);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    list<int> l4(l);
    display(l);

    l.pop_back();
    l.pop_front();
    display(l);

    l.erase(l.begin());
    display(l);

    cout << "size - " << l.size() << endl;
    // cout << l.at(2) << l.[3];    This will give error

    // dynamic
    display(l3);
    display(l4);
    return 0;
}