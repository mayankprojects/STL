#include <iostream>
#include <array>  // static array
using namespace std;
int main()
{

    // decleration
    array<int, 5> arr = {1, 2, 3, 4, 5};  // only initialization way

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }

    cout << endl;
    
    cout << arr.empty() << endl; // if the array is elempy of not

    cout << arr.front() << " " << arr.back() << endl;  // front and back element

    return 0;
}

