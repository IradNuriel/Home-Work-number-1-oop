//Irad Nuriel 324220458
#ifndef _GARAGE_H_
#define _GARAGE_H_
#include <string>
#include "Car.h"
#define MAX_CARS_NUMBER 20
using std::string;
inline bool isSecond(string s1, string s2);//return true if s2 if before s1 in alphabetic order, false otherwise
//Garage class declaration:
class Garage {
private:
	string name;
	Car cars[MAX_CARS_NUMBER];
	int carNumber;
	//helpers function for printing
	void sortCarsBy(bool type);//this method can sort the car both by year(true) and by name(false)
	void swapByIndex(int index1, int index2);//swap between cars[index1] and cars[index2]
	void printCars() const;
public:
	//constructors:
	Garage();
	Garage(string name);
	//setter:
	const Garage& setName(const string& name);
	//getters:
	const string& getName() const;
	const Car* getCars() const;
	int getCarNumber() const;
	//printBy methods:
	void printCarsByName();
	void printCarsByYear();
	//addCar:
	void addCar(const Car& car);
};

#endif // _GARAGE_H_

