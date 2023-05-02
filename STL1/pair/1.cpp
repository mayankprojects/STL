#include <iostream>
#include <utility>
using namespace std;
int main()
{
    // declare
    pair<int, string> p1;

    // intialize
    p1.first = 100;       // cin>>p1.first;   //1st method
    p1.second = "mayank"; // cin>>p1.second;

    pair<int, string> p2(200, "sonu");        //2nd method

    pair<int, string> p3;                     //3rd method
    p3 = make_pair(300, "monu");

    pair<int, string> p4;                     //4th method
    p4 = {400, "don"};

    //access
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    cout << p4.first << " " << p4.second << endl;

    return 0;
}