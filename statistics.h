#include "car.h"

#ifndef STATISTICS_H
#define STATISTICS_H

class Statistics : public Car
{
public:
	Statistics();

	double sumOfValues();
	int sumOfCars();
	string getOldestCar();
	string getNewestCar();
	string getMostExpensiveCar();
	string getMostRecentAddition();

	void print();
	static void test();

private:

};
#endif