#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int &b = a;
    // b is the reference(copy) of a
    // any changes in either of them with affect each other

    b = 7;
    cout << a;

    a = 6;
    cout << b;
    return 0;
}