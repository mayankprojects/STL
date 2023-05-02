/* for accessing ->
 - no iterators
 - no s[i]
 - no s.at()
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare
    stack<int> s;

    // initialize
    int size, ele;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        s.push(ele);
    }

    // accessing
    for (int i = 0; i < size; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}