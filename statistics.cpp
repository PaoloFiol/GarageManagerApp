#include "statistics.h"

Statistics::Statistics()
{

}

double Statistics::sumOfValues()
{
	double sum = 0;
	for (unsigned int i = 0; i < this->value.size(); i++)
	{
		sum += this->value[i];
	}
	return sum;
}

int Statistics::sumOfCars()
{
	double sum = 0;
	for (unsigned int i = 0; i < this->car.size(); i++)
	{
		sum = 1;
		sum += i;
	}
	return sum;
}

string Statistics::getOldestCar()
{
	if (this->year.size() < 1)
	{
		return "Garage empty";
	}
	int oldestCar = this->year[0];
	int index = 0;
	for (unsigned int i = 1; i < this->year.size(); i++)
	{
		if (this->year[i] < oldestCar)
		{
			oldestCar = this->year[i];
			index = i;
		}
	}

	return this->car[index];
}

string Statistics::getNewestCar()
{
	if (this->year.size() < 1)
	{
		return "Garage empty";
	}
	int newestCar = this->year[0];
	int index = 0;

	for (unsigned int i = 1; i < this->year.size(); i++)
	{
		if (this->year[i] > newestCar)
		{
			newestCar = this->year[i];
			index = i;
		}
	}
	return this->car[index];
}

string Statistics::getMostExpensiveCar()
{
	if (this->value.size() < 1)
	{
		return "Garage empty";
	}
	int highestCarValue = this->value[0];
	int index = 0;

	for (unsigned int i = 1; i < this->value.size(); i++)
	{
		if (this->value[i] > highestCarValue)
		{
			highestCarValue = this->value[i];
			index = i;
		}
	}
	return this->car[index];
}

string Statistics::getMostRecentAddition()
{
	if (this->car.size() == 0)
	{
		return "Garage empty";
	}
	else {
		return this->car.back();
	}
}


void Statistics::print()
{
	cout << "Testing total value: $" << sumOfValues() << endl;
	cout << "Testing total cars: " << sumOfCars() << endl;
	cout << "Testing oldest car: " << getOldestCar() << endl;
	cout << "Testing newest car: " << getNewestCar() << endl;
	cout << "Testing most expensive car: " << getMostExpensiveCar() << endl;
	cout << "Testing most recent addition: " << getMostRecentAddition() << endl;
}

void Statistics::test()
{
	Statistics testStats;
	testStats.print();
}
