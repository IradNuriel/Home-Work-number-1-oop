//Irad Nuriel 324220458
#ifndef _CAR_H_
#define _CAR_H_
#include <string>
#include "Engine.h"
using std::string;
//class Car decleration:
class Car {
private:
	Engine engine;
	string manufacturer;
	int year;
	string color;
public:
	//constructors:
	Car();
	Car(const Engine& engine, const string& manufacturer, int year, const string& color);
	//setters:
	const Car& setEngine(const Engine& engine);
	const Car& setManufacturer(const string& name);
	const Car& setYear(int year);
	const Car& setColor(const string& color);
	//getters:
	const Engine& getEngine() const;
	const string& getManufacturer() const;
	int getYear() const;
	const string& getColor() const;
	//print method:
	void print() const;
};
#endif // _CAR_H_
