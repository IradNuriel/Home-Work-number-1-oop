//Irad Nuriel 324220458

#include "Engine.h"
#include <iostream>
#include <string>


using std::endl;
using std::string;
using std::cout;

Engine::Engine() {
	this->horsePowers = 0;
	this->manufacturer = "~";
	this->year = 0;
}

Engine::Engine(double numHorsePowers, const string& manufactorName, int yearOfManufacturing): manufacturer("~") {
	this->horsePowers = numHorsePowers;
	this->setManufacturer(manufactorName);
	this->year = yearOfManufacturing;
}

const Engine& Engine::setHorsePower(double numHorsePowers) {
	this->horsePowers = numHorsePowers;
	return *this;
}

const Engine& Engine::setManufacturer(const string& name) {
	if (name.length() <= 10) {//check for valid name
		this->manufacturer = name;
	}
	else {
		cout << "manufacturer length is too long" << endl;
	}
	return *this;
}

const Engine& Engine::setYear(int year) {
	this->year = year;
	return *this;
}

double Engine::getHorsePowers() const {
	return this->horsePowers;
}

const string & Engine::getManufacturer() const {
	return this->manufacturer;
}

int Engine::getYear() const {
	return this->year;
}

void Engine::print() const{
	cout << "Engine horsepowers: " << this->horsePowers << endl;
	cout << "Engine manufacturer: " << this->manufacturer << endl;
	cout << "Engine year: " << this->year << endl;
}


