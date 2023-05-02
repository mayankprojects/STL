#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    string str;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        m[str] = m[str] + 1;
    }

    cout << endl;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}