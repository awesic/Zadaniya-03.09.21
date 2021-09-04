
#include <iostream>
using namespace std;

int main()
{
    int a = 1234;
    cout << a % 10;
    a /= 10;
    cout << a % 10;
    a /= 10;
    cout << a % 10;
    a /= 10;
    cout << a % 10 << endl;

    return 0;
}
