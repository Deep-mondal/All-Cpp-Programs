#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "Enter another number" << endl;
    cin >> b;
    if (a > b)
    {
        cout << "The greater number is A";
    }
    else
    {
        cout << "The greater number is B ";
    }
    return 0;
}
