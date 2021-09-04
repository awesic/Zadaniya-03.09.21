
#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, sum = 0;
    int i = x;
    cout << "Введите диапазон чисел через enter: ";
    cin >> x;
    cin >> y;
    while (i <= y)
    {
        sum += i;
        i++;
    }
    cout << "\nСумма в диапазоне от " << x << " до " << y << " = " << sum << endl;

    return 0;
}
