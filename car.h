#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>

#ifndef CAR_H
#define CAR_H

using namespace std;

class Car
{
public:
	Car();

	int getMainMenuOptionFromUser();
	int getManufacturerFromUser();
	int getHondaFromUser();
	int getToyotaFromUser();
	int getChevyFromUser();
	int getDodgeFromUser();
	int getColorFromUser();
	void deleteCar();

	void print();
	static void test();

protected:
	vector<string> car;
	vector<string> color;
	vector<string> country;
	vector<int> year;
	vector<double> value;

};
#endif