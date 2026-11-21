/*Задание 2. bool consumeCredit(int& credit, int kWh, int tariff): если kWh > 0,
tariff >= 0 и хватает credit, списать kWh·tariff; иначе credit не менять.*/
#include <iostream>
using namespace std;

bool consumeCredit(int& credit, int kWh, int tariff) {
    if (kWh > 0 && tariff >= 0 && credit >= kWh * tariff) {
        credit -= kWh * tariff;
        return true;
    }
    return false;
}

int main() {
    int kWh, tariff, credit;
    cin >> credit >> kWh >> tariff;

    if (consumeCredit(credit, kWh, tariff)) {
        cout << "Успешно. Остаток: " << credit;
    }
    else {
        cout << "Ошибка списания. Остаток: " << credit;
    }
}
