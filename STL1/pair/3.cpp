#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, int> p[3];
    p[0] = {10, 20};
    p[1] = {30, 40};
    p[2] = {50, 60};

    swap(p[0], p[1]);
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}