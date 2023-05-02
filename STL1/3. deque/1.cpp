#include <iostream>
#include <deque> // double ended queue
using namespace std;
void display(deque<int> &d)
{
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    display(d);

    d.pop_back();
    d.pop_front();
    display(d);

    d.erase(d.begin(), d.begin() + 1); // TC O(n)
    // d.erase(d.begin() + 4);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d.at(i) << " ";
        // cout << d[i] << " ";
    }

    return 0;
}