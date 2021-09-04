
#include <iostream>
using namespace std;

int main()
{
    float x;
    char exit = '0';    
    while (exit != 'x')
    {
        cout << "Введите число для возведения в куб: ";
        cin >> x;
        cout << pow(x, 3) << endl;
        cout << "Для выхода нажмите 'x' или букву для продолжения ";
        cin >> exit;
    }

    return 0;
}
