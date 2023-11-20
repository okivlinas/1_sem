#include <iostream>

using namespace std;

long long a, b, c, n, i;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Здравствуйте, не подскажете, какая сегодня погода?! (1-дождь, 2-ветренно, 3-солнечная, 4-облачно)" << endl;
    cout << "Ваш вариант: ";
    cin >> a;
    switch (a) {
    case 1: {
        puts("Какая именно? (1-с грозой, 2-без грозы)");
        cin >> b;
        switch (b) {
        case 1: puts("Эх, ладно..."); break;
        case 2: puts("О, хоть что-то радует"); break;
        default: puts("Некорректный ввод"); break;
        }
        break;
    }
    case 2: {
        puts("Сильный ли ветер? (1-да, 2-нет)");
        cin >> b;
        switch (b) {
        case 1: puts("Обидно, останусь дома!"); break;
        case 2: puts("Значит можно сходить на улицу, прогуляться!"); break;
        default: puts("Некорректный ввод"); break;
        }
        break;
    }
    case 3: puts("Это лучшая погода в мире!!!"); break;
    case 4: puts("Тоже хорошо, не хватает лишь солнца!"); break;
    default: puts("Некорректный ввод"); break;
    }
    return 0;
}
