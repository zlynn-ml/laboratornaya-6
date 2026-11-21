/*Задание 1. int chargingPrice(int kWh, int freeKWh, int tariff):
стоимость энергии сверх бесплатного лимита; неотрицательные аргументы.*/
#include <iostream>
using namespace std;

int chargingPrice(int kWh, int freeKWh, int tariff) {
	if (kWh < 0 || freeKWh < 0 || tariff < 0)
		return -1;
	if (kWh > freeKWh)
		return (kWh - freeKWh) * tariff;
	else
		return 0;

}

int main() {
	int kWh, freeKWh, tariff;

	cin >> kWh >> freeKWh >> tariff;

	cout << chargingPrice(kWh, freeKWh, tariff);

}