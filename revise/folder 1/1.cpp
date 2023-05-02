#include <iostream>
using namespace std;
int main()
{
    int nth;
    int cur = 1, pre = 0, temp;
    cin >> nth;
    for (int i = 0; i < nth; i++)
    {
        cout << cur << " ";
        temp = cur;
        cur = cur + pre;
        pre = temp;
    }
    cout << endl
         << pre;
    return 0;
}