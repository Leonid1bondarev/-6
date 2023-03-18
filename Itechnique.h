#pragma once
#include <iostream>
using namespace std;
class Itechnique
{
public:
	virtual void Show() = 0;
	virtual ~Itechnique() = default;
};