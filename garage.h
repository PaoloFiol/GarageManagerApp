#include "statistics.h"
#include "car.h"

#ifndef GARAGE_H
#define GARAGE_H

class Garage : public Statistics
{
public:
	Garage();

	static void process();
	void addManufacturer();
	void addHondaModel();
	void addToyotaModel();
	void addChevyModel();
	void addDodgeModel();
	void addColor();

	void saveToFile();

	void printGarage();
	void printStats();
	static void test();

private:

};
#endif