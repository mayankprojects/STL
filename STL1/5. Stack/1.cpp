#include <iostream>
#include <stack>   //LIFO
using namespace std;
int main()
{
    stack<string> s;

    s.push("Mayank");
    s.push("Kumar");
    s.push("rana");

    cout << s.top() << endl;
    s.pop();   //rana popped
    cout << s.top() << endl;
    cout << "size is - " << s.size() << endl;
    cout << "empty is - " << s.empty() << endl;

    return 0;
}