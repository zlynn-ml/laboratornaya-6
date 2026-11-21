/*Задание 4. int stationBill(int energy, int rate = 8, int connectionFee = 6):
energy·rate + connectionFee; если energy == 0, вернуть 0. Отрицательные данные → -1.*/
#include <iostream>
using namespace std;

int stationBill(int energy, int rate = 8, int connectionFee = 6) {
    if (energy < 0 || rate < 0 || connectionFee < 0) {
        return -1;
    }
    if (energy == 0) {
        return 0;
    }
    return energy * rate + connectionFee;
}

int main() {
    int energy, rate, connectionFee;
    cin >> energy >> rate >> connectionFee;

    cout << stationBill(energy, rate, connectionFee);
}
