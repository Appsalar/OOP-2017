#pragma once
#include "../Week3/String.h"
#include <iostream>

class Device
{
private:
	static const int voltage = 220;
	static const double maxCurrent;
	static const double maxPower;

	static double elCurrent;
	static double curPower;

	String category;
	double power;
	bool state;

	void setState(bool);
public:
	Device();
	Device(const char*, double, bool);
	~Device();

	// Така забраняваме копи-конструктор и 
	// оператор=, като този синтаксис е 
	// сравнително нов. Класическият вариант 
	// е да бъдат private, но тогава все пак 
	// трябва да се напише някакво тяло за тях 
	Device(const Device&) = delete;
	Device& operator=(const Device&) = delete;


	void setCategory(const char*);
	const char* getCategory() const;

	double getPower() const;
	// Тук е мазало, защото ако уреда е включен и 
	// тръгнем да му сменяме мощтността трябва да 
	// се преизчислява и ако надвишава границите 
	// не е ясно какво трябва да стане така че 
	// ще променяме само ако е изключен 
	void setPower(double);

	void turnOn();
	void turnOff();
	bool getState() const;
};

