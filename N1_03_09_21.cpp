
#include <iostream>
using namespace std;

int main()
{
    int quant;
    float price;
    float sum = 0;
    cout << "Введите количество товаров: ";
    cin >> quant;
    for (int i = 0; i < quant; i++) {
        cout << "Цена " << i + 1 << " товара: ";
        cin >> price;
        sum += price;
    }
    cout << "Итого: " << sum << endl;
}

