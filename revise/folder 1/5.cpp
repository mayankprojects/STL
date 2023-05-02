#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int x;
    while (1)
    {
        cout << "Enter the value of x" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
        {
            cout << "The value is 1" << endl;
            break;
        }
        case 2:
        {
            cout << "The value is 2" << endl;
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
        {
            cout << "Default Case";
        }
        }
    }
    return 0;
}