#pragma once
#include "Itechnique.h"
class PortableTechnique : virtual public Itechnique
{
public:
	PortableTechnique(int batteryTime);
		void Show() override;
protected:
	int _batteryTime;
};
class Watch final : public PortableTechnique
{
public:
	Watch(int batteryTime, int NumberofBatteries);
	void Show() override;
protected:
	int _NumberofBatteries;
};
class Flasglight final : public PortableTechnique
{
public:
	Flasglight(int batteryTime, string color);
	void Show() override;
protected:
	string _color;
};