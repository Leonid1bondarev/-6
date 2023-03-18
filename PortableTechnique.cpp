#include "PortableTechnique.h"

PortableTechnique::PortableTechnique(int batteryTime) : _batteryTime(batteryTime)
{
}

void PortableTechnique::Show()
{
	cout << "" << _batteryTime << endl;
}

Watch::Watch(int batteryTime, int NumberofBatteries) : PortableTechnique(batteryTime), _NumberofBatteries(NumberofBatteries)
{
}

void Watch::Show()
{
	cout << _NumberofBatteries << " ��������� � �����. ����� ������ �����: " << _batteryTime << endl;
}

Flasglight::Flasglight(int batteryTime, string color) : PortableTechnique(batteryTime), _color(color)
{
}

void Flasglight::Show()
{
	cout << _color << " ���� ��������. ����� ������ �������� :" << _batteryTime << endl;
}
