#include "car.h"

Car::Car()
{

}

int Car::getMainMenuOptionFromUser()
{
	int mainMenuChoice;
	cout << "Garage Manager App\n============================" << endl;
	cout << "1. Add a car" << endl;
	cout << "2. Delete a car" << endl;
	cout << "3. View my garage" << endl;
	cout << "4. Save my garage" << endl;
	cout << "5. View garage stats" << endl;
	cout << "6. Exit application" << endl;
	cin >> mainMenuChoice;
	cout << endl;
	return mainMenuChoice;
}

int Car::getManufacturerFromUser()
{
	int carChoice;
	cout << "Select a manufacturer:" << endl;
	cout << "1. Honda" << endl;
	cout << "2. Toyota" << endl;
	cout << "3. Chevrolet" << endl;
	cout << "4. Dodge" << endl;
	cin >> carChoice;
	cout << endl;
	return carChoice;
}

int Car::getHondaFromUser()
{
	int hondaChoice;
	cout << "Select a Honda model:" << endl;
	cout << "1. Civic" << endl;
	cout << "2. Accord" << endl;
	cout << "3. Integra" << endl;
	cin >> hondaChoice;

	return hondaChoice;
}

int Car::getToyotaFromUser()
{
	int toyotaChoice;
	cout << "Select a Toyota model:" << endl;
	cout << "1. Corolla" << endl;
	cout << "2. Supra" << endl;
	cout << "3. Prius" << endl;
	cin >> toyotaChoice;

	return toyotaChoice;
}

int Car::getChevyFromUser()
{
	int chevyChoice;
	cout << "Select a Chevrolet model:" << endl;
	cout << "1. Camaro" << endl;
	cout << "2. Silverado" << endl;
	cout << "3. Corvette" << endl;
	cin >> chevyChoice;

	return chevyChoice;
}

int Car::getDodgeFromUser()
{
	int dodgeChoice;
	cout << "Select a Dodge model:" << endl;
	cout << "1. Charger" << endl;
	cout << "2. Challenger" << endl;
	cout << "3. Viper" << endl;
	cin >> dodgeChoice;

	return dodgeChoice;
}

int Car::getColorFromUser()
{
	int colorChoice;
	cout << "\nSelect a color: " << endl;
	cout << "1. Black" << endl;
	cout << "2. Silver" << endl;
	cout << "3. Red" << endl;
	cout << "4. Yellow" << endl;
	cin >> colorChoice;
	return colorChoice;
}

void Car::deleteCar()
{
	if (this->car.size() == 0)
	{
		cout << "Garage empty. Nothing to delete." << endl;
		cout << endl;
		return;
	}
	int index;
	cout << "Please select a car to delete:" << endl;
	for (unsigned int i = 0; i < this->car.size(); i++)
	{
		cout << i + 1 << ". " << this->car[i] << endl;
	}
	if (cin >> index && index > 0 && index < this->car.size() + 1)
	{
		cout << "\n" << this->car[index - 1] << " has been deleted.\n\n";
		this->car.erase(this->car.begin() + (index - 1));
		this->country.erase(this->country.begin() + (index - 1));
		this->year.erase(this->year.begin() + (index - 1));
		this->color.erase(this->color.begin() + (index - 1));
		this->value.erase(this->value.begin() + (index - 1));
	}
	else {
		cout << "\nInvalid input." << endl;
		cout << endl;
	}
}

void Car::print()
{
	this->car.push_back("PASS");
	this->color.push_back("PASS");
	this->country.push_back("PASS");
	this->year.push_back(10000);
	this->value.push_back(100.53);
	cout << "Car test: " << this->car[0] << endl;
	cout << "Color test: " << this->color[0] << endl;
	cout << "Country test: " << this->country[0] << endl;
	cout << "Year test: " << this->year[0] << endl;
	cout << "Value test: " << this->value[0] << endl;
}

void Car::test()
{
	Car testCar;
	testCar.print();
}

