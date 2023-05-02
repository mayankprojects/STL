/* for accessing ->
 - no iterators
 - no s[i]
 - no s.at()
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //declare
    queue<int> q;

    //initialze
    int size, ele;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        q.push(ele);
    }

    // access
    for (int i = 0; i < size; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}