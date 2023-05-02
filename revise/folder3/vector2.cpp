#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1(5);    // 5 -> size with all 0
    vector<int> v2(5, 1); // 5 size with all ele 1
    vector<int> v3(v2);   // v2 copied to v3

    // size is total numeber of elements where as
    // capacity is the total spaces present

    cout << v1.size() << " " << v1.capacity() << endl;
    v1.push_back(5); // when size gets increased at run time then new array with size
                     // double as old array is made and old array is dumped
    cout << v1.size() << " " << v1.capacity() << endl;
    v1.pop_back(); // delete an element
    cout << v1.size() << " " << v1.capacity() << endl;

    cout << v1.front() << " and " << v1.back();

    return 0;
}