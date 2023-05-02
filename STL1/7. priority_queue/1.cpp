#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //declare
    priority_queue<int> maxi;                            // queue as max heap
    priority_queue<int, vector<int>, greater<int>> mini; // queue as min heap

    //intialize, can also be done with loops
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    //access
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop(); // Max element gets popped
    }

    cout << endl;

    //intialize, can also be done with loops
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    //access
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop(); // min element gets popped
    }

    

    return 0;
}