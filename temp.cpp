#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> &arr)
{
    int n = arr.size();
    if (n & 1)
        return {-1};
    unordered_map<int, int> hsh;
    for (auto &a : arr)
        hsh[a] += 1;
    sort(arr.begin(), arr.end());
    vector<int> resVec;
    for (auto &a : arr)
    {
        if (hsh.count(a) && hsh.count(3 * a))
        {
            resVec.push_back(a);
            if (hsh[a] == 1)
                hsh.erase(a);
            else
                hsh[a] -= 1;
            if (hsh[3 * a] == 1)
                hsh.erase(3 * a);
            else
                hsh[3 * a] -= 1;
        }
        else if (hsh.count(a) && !hsh.count(3 * a))
            return {-1};
    }
    return resVec;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr)
        cin >> a;

    vector<int> resVec = func(arr);
    for (auto &a : resVec)
        cout << a << " ";
}