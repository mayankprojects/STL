#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10, b = 20;
    cout << "The max element is " << max(a, b) << endl;
    cout << "The min element is " << min(a, b) << endl;
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}