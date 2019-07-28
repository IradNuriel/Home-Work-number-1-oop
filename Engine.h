//Irad Nuriel 324220458
#ifndef _ENGINE_H_
#define _ENGINE_H_
#include <string>
using std::string;
//class Engine decleration:
class Engine {
private:
	double horsePowers;
	string manufacturer;
	int year;
public:
	//constructors:
	Engine();
	Engine(double numHorsePowers, const string& manufactorName, int yearOfManufacturing);
	//setters:
	const Engine& setHorsePower(double numHorsePowers);
	const Engine& setManufacturer(const string& name);
	const Engine& setYear(int year);
	//getters:
	double getHorsePowers() const;
	const string& getManufacturer() const;
	int getYear() const;
	//print method:
	void print() const;
};
#endif // _ENGINE_H_