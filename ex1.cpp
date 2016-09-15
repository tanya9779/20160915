#include <iostream>
using namespace std;

void bad_incrementor(int x)
{
        x++;
        cout << "x changed: " << x << endl;
}

int main()
{
    int x = 3; // формальный параметр для bad_incrementor()
    int y = 5; // фактический параметр

    bad_incrementor(y);
    cout << "y NOT changed: "<< y;

    return 0;
}
