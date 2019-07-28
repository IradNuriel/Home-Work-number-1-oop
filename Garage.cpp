//Irad Nuriel 324220458

#include "Garage.h"
#include "Car.h"
#include <string>
#include <iostream>


using std::endl;
using std::string;
using std::cout;




//function for knowing if s1 if before s2 in alphabethic order(false) of not
inline bool isSecond(string s1, string s2) {
	return (s1.compare(s2) >= 0);
}


void Garage::swapByIndex(int index1, int index2) {
	//just a swaping function
	Car temp = this->cars[index1];
	this->cars[index1] = this->cars[index2];
	this->cars[index2] = temp;
}

void Garage::printCars() const {//method for printing all cars in the gerage
	if (this->carNumber > 1) {
		cout << "There are " << this->carNumber << " cars in the garage. The cars: " << endl;
	}
	else {
		cout << "There is " << this->carNumber << " car in the garage. The car: " << endl;
	}
	for (int i = 0; i < this->carNumber; i++) {
		(this->cars[i]).print();
		cout << endl;
	}
}


void Garage::sortCarsBy(bool type) {
	//implementation of buble sort:
	for (int i = 0; i < this->carNumber - 1; i++) {
		// Last i elements are already in place  
		for (int j = 0; j < this->carNumber - i - 1; j++) {
			if (((!type)&&isSecond(((this->cars[j]).getManufacturer()),((this->cars[j + 1]).getManufacturer())))||((type)&& ((this->cars[j]).getYear() > (this->cars[j + 1]).getYear()))) {
				//we get here iff we need to swap, works in both types of sorts(if type==false if will be sort by manufacturer name, if type==true it will be sort by year)
				swapByIndex(j, j+1);
			}
		}
	}
}

Garage::Garage(): name("~") {}

Garage::Garage(string name): name("~") {
	this->setName(name);
	this->carNumber = 0;
}

const Garage& Garage::setName(const string & name) {
	if (name.length() <= 10) {//check for valid name
		this->name = name;
	}
	else {
		cout << "Garage's name is too long" << endl;
	}
	return *this;
}

const string& Garage::getName() const {
	return this->name;
}

const Car* Garage::getCars() const {
	return this->cars;
}

int Garage::getCarNumber() const {
	return this->carNumber;
}

void Garage::printCarsByName() {
	this->sortCarsBy(false);
	this->printCars();
}

void Garage::printCarsByYear() {
	this->sortCarsBy(true);
	this->printCars();
}

void Garage::addCar(const Car & car) {
	if (this->carNumber >= MAX_CARS_NUMBER) {
		cout << "The garage is full!";
	}
	else {
		this->cars[this->carNumber] = car;
		this->carNumber++;
	}
}

