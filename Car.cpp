//Irad Nuriel 324220458

#include "Car.h"
#include "Engine.h"
#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;


Car::Car():engine() {
	this->manufacturer = "~";
	this->year = 0;
	this->color = "~";
}

Car::Car(const Engine& engine, const string& manufacture, int year, const string& color):manufacturer("~"),color("~") {
	this->engine = engine;
	this->setManufacturer(manufacture);
	this->year = year;
	this->setColor(color);
}

const Car & Car::setEngine(const Engine & engine) {
	this->engine = engine;
	return *this;
}

const Car & Car::setManufacturer(const string & name) {
	if (name.length() <= 10) {//check for valid manufacturer name
		this->manufacturer = name;
	}
	else {
		cout << "manufacturer length is too long" << endl;
	}
	return *this;
}

const Car & Car::setYear(int year) { 
	this->year = year;
	return *this;
}

const Car & Car::setColor(const string & color) {
	if (color.length() <= 10) {//check for valid color name
		this->color = color;
	}
	else {
		cout << "color length is too long" << endl;
	}
	return *this;
}

const Engine & Car::getEngine() const {
	return this->engine;
}

const string & Car::getManufacturer() const {
	return this->manufacturer;
}

int Car::getYear() const {
	return this->year;
}

const string & Car::getColor() const {
	return this->color;
}

void Car::print() const{
	this->engine.print();
	cout << "Car manufacturer: " << this->manufacturer << endl;
	cout << "Car year: " << this->year << endl;
	cout << "Car color: " << this->color << endl;
}





