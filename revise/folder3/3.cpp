#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);

    int x;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}