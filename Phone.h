#pragma once
#include "PortableTechnique.h"
#include "Appliances.h"
class Phone : public PortableTechnique, Appliances
{
public:
	Phone(int batteryTime, int chargingVoltage);
	void Show() override;
};
