#include <iostream>
using namespace std;

int bits(int x)
{
    int last, cnt = 0;
    while (x != 0)
    {
        if (x & 1 == 1)
            cnt++;

        x = x >> 1;
    }
    return cnt;
}

int main()
{
    int a, b, ans;
    cin >> a >> b;
    ans = bits(a) + bits(b);
    cout << ans;
    return 0;
}