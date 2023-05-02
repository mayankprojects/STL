#include <iostream>
#include <queue> //FIFO
using namespace std;
int main()
{
    queue<string> q;
    q.push("Mayank");
    q.push("Kumar");
    q.push("Rana");

    cout << q.front() << endl;
    q.pop();    //Mayank popped
    cout << q.front() << endl;

    cout << "size is - " << q.size() << endl;
    cout << "empty is - " << q.empty() << endl;

    return 0;
}