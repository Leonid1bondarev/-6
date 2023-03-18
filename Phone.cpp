#include "Phone.h"

Phone::Phone(int batteryTime, int chargingVoltage) : PortableTechnique(batteryTime), Appliances(chargingVoltage)
{
}

void Phone::Show()
{
	cout << "������� �� ������� ����������: " << _chargingVoltage << " ����� ������ ��������: " << _batteryTime << endl;
}
