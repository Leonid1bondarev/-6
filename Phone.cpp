#include "Phone.h"

Phone::Phone(int batteryTime, int chargingVoltage) : PortableTechnique(batteryTime), Appliances(chargingVoltage)
{
}

void Phone::Show()
{
	cout << "Зарядка от розетки напряжения: " << _chargingVoltage << " Время работы телефона: " << _batteryTime << endl;
}
