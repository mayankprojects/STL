#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Decleare
    vector<int> vec;

    // Initialize
    for (int i = 1; i < 6; i++)
    {
        vec.push_back(i);
    }

    // Accessing
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;
    

    cout << vec.capacity() << endl;
    cout << vec.size();

    return 0;
}