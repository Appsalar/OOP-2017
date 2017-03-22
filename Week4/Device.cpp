#include "Device.h"

// По този начин се инициализират статични 
// член-данни, ако не са константи или ако са 
// const float/double 
double Device::curPower = 0;
double Device::elCurrent = 0;
const double Device::maxCurrent = 16;
const double Device::maxPower = 3500;

void Device::setState(bool state)
{
	if (state)
		turnOn();
	else
		turnOff();
}

Device::Device()
{
	category = NULL;
	power = 0;
	state = false;
}

Device::Device(const char * category, double power, bool state)
{
	setCategory(category);
	this->power = power;
	setState(state);
}


Device::~Device()
{
}

void Device::setCategory(const char * newCategory)
{
	category.setString(newCategory);
}

const char * Device::getCategory() const
{
	return category.getString();
}

double Device::getPower() const
{
	return power;
}

void Device::setPower(double power)
{
	if (state == false)
	{
		this->power = power;
	}
	else
	{
		std::cout << "Уредът е включен!" << std::endl;
	}
}

void Device::turnOn()
{
	if (state = false)
	{
		double newCurrent = elCurrent + power / voltage;


		if (newCurrent > maxCurrent)
		{
			std::cout << "Пренатоварване" << std::endl;
			return;
		}
		else
			elCurrent = newCurrent;

		double newPower = curPower + power;
		if (newPower > maxPower)
		{
			std::cout << "Пренатоварване" << std::endl;
			return;
		}
		else
			curPower = newPower;

		state = true;
	}
}

void Device::turnOff()
{
	if (state = true)
	{
		double deviceCurrent = power / voltage;
		elCurrent -= deviceCurrent;

		curPower -= power;

		state = false;
	}
}

bool Device::getState() const
{
	return state;
}
