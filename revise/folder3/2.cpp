#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5, 1);
    vector<int> copy(v);

    v.push_back(5);
    v.pop_back();
    cout << v.front() << " " << v.back() << endl;
    // cout << v.begin() << " " << v.end() << endl;
    auto i = v.begin();
    auto j = v.end();
    cout << *i << " " << *j << endl;

    v.clear();
    cout << v.capacity() << " " << v.size();

    return 0;
}