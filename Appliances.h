#pragma once
#include "Itechnique.h"
class Appliances : virtual public Itechnique
{
public:
	Appliances(int chargingVoltage);
	void Show() override;
protected:
	int _chargingVoltage = 220;
};
class TV final : public Appliances
{	
public:
	TV(int chargingVoltage, int size);
	void Show() override;
protected:
	int _size;
};
class AirConditioner final : public Appliances
{
public:
	AirConditioner(int chargingVoltage, int power);
	void Show() override;
protected:
	int _power;
};