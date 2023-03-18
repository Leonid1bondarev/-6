#include "Appliances.h"

Appliances::Appliances(int chargingVoltage) : _chargingVoltage(chargingVoltage)
{
}

void Appliances::Show()
{
	cout << "" << _chargingVoltage << endl;
}

TV::TV(int chargingVoltage, int size) : Appliances(chargingVoltage), _size(size)
{
}

void TV::Show()
{
	cout << "Зарядка от розетки напряжения: " << _chargingVoltage << " Диагональ телевизора " << _size << endl;
}

AirConditioner::AirConditioner(int chargingVoltage, int power) : Appliances(chargingVoltage), _power(power)
{
}

void AirConditioner::Show()
{
	cout << "Зарядка от розетки напряжения: " << _chargingVoltage << " Мощность кондиционера " << _power << endl;
}
