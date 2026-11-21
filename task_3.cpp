/*Задание 3. Перегрузите chargeTime: int chargeTime(int energy, int speed) — округлить
энергию/speed вверх до целого часа; int chargeTime(int energy, int speed, int setupHours)
— добавить время настройки. energy >= 0, speed > 0, setupHours >= 0.
*/
#include <iostream>
using namespace std;

int chargeTime(int energy, int speed) {
    if (energy < 0 || speed <= 0) return -1;
    return (energy / speed) + (energy % speed != 0);
}

int chargeTime(int energy, int speed, int setupHours) {
    if (energy < 0 || speed <= 0 || setupHours < 0) return -1;
    return chargeTime(energy, speed) + setupHours;
}

int main() {
    int energy, speed, setupHours;
    cin >> energy >> speed >> setupHours;

    cout << chargeTime(energy, speed) << endl;
    cout << chargeTime(energy, speed, setupHours) << endl;
}
