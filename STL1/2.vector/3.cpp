#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v(5, 1);
    display(v);
    v.erase(v.begin(), v.begin() + 1); // delete for a particular range
    display(v);
    v.clear(); // deletes all the elements
    display(v);
    return 0;
}