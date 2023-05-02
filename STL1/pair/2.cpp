#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, int> p(6, 9);
    pair<int, int> copy(p);

    cout << copy.first << " " << copy.second << endl;

    pair<int, int> &cp = p;
    p.first = 5;
    cout << cp.first << " " << cp.second << endl;

    return 0;
}