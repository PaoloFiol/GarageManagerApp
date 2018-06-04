
#include "garage.h"

Garage::Garage()
{

}

void Garage::process()
{
	bool runApplication = true;

	Garage myGarage;

	while (runApplication)
	{
		int choice = myGarage.getMainMenuOptionFromUser();
		cin.clear();
		cin.ignore(512, '\n');

		switch (choice)
		{
		case 1:
			myGarage.addManufacturer();
			break;
		case 2:
			myGarage.deleteCar();
			break;
		case 3:
			myGarage.printGarage();
			break;
		case 4:
			myGarage.saveToFile();
			break;
		case 5:
			myGarage.printStats();
			break;
		case 6:
			cout << "Closing app..." << endl;
			runApplication = false;
			break;
		default:
			cout << "Invalid input. Try again.\n" << endl;
		}
	}
}

void Garage::addManufacturer()
{
	int choice = getManufacturerFromUser();
	switch (choice)
	{
	case 1:
		addHondaModel();
		break;
	case 2:
		addToyotaModel();
		break;
	case 3:
		addChevyModel();
		break;
	case 4:
		addDodgeModel();
		break;
	default:
		cout << "Invalid input. Try again.\n" << endl;
		cin.clear();
		cin.ignore(512, '\n');
		break;
	}
}

void Garage::addHondaModel()
{
	this->country.push_back("Japan");
	int choice = getHondaFromUser();
	cout << endl;
	switch (choice)
	{
	case 1:
		cout << "Honda Civic added to garage." << endl;
		this->car.push_back("Honda Civic");
		this->year.push_back(2007);
		this->value.push_back(4100);
		addColor();
		break;
	case 2:
		cout << "Honda Accord added to garage." << endl;
		this->car.push_back("Honda Accord");
		this->year.push_back(1998);
		this->value.push_back(1850);
		addColor();
		break;
	case 3:
		cout << "Honda Integra added to garage." << endl;
		this->car.push_back("Honda Integra");
		this->year.push_back(2006);
		this->value.push_back(7525);
		addColor();
		break;
	default:
		cout << "Invalid input. Try again.\n" << endl;
		cin.clear();
		cin.ignore(512, '\n');
		break;
	}
}

void Garage::addToyotaModel()
{
	this->country.push_back("Japan");
	int choice = getToyotaFromUser();
	cout << endl;
	switch (choice)
	{
	case 1:
		cout << "Toyota Corolla added to garage." << endl;
		this->car.push_back("Toyota Corolla");
		this->year.push_back(2015);
		this->value.push_back(12300);
		addColor();
		break;
	case 2:
		cout << "Toyota Supra added to garage." << endl;
		this->car.push_back("Toyota Supra");
		this->year.push_back(1994);
		this->value.push_back(20750);
		addColor();
		break;
	case 3:
		cout << "Toyota Prius added to garage." << endl;
		this->car.push_back("Toyota Prius");
		this->year.push_back(2012);
		this->value.push_back(11250);
		addColor();
		break;
	default:
		cout << "Invalid input. Try again.\n" << endl;
		cin.clear();
		cin.ignore(512, '\n');
		break;
	}
}

void Garage::addChevyModel()
{
	this->country.push_back("USA");
	int choice = getChevyFromUser();
	cout << endl;
	switch (choice)
	{
	case 1:
		cout << "Chevrolet Camaro added to garage." << endl;
		this->car.push_back("Chevrolet Camaro");
		this->year.push_back(2017);
		this->value.push_back(25350);
		addColor();
		break;
	case 2:
		cout << "Chevrolet Silverado added to garage." << endl;
		this->car.push_back("Chevrolet Silverado");
		this->year.push_back(2010);
		this->value.push_back(16550);
		addColor();
		break;
	case 3:
		cout << "Chevrolet Corvette added to garage." << endl;
		this->car.push_back("Chevrolet Corvette");
		this->year.push_back(1970);
		this->value.push_back(18950);
		addColor();
		break;
	default:
		cout << "Invalid input. Try again.\n" << endl;
		cin.clear();
		cin.ignore(512, '\n');
		break;
	}
}

void Garage::addDodgeModel()
{
	this->country.push_back("USA");
	int choice = getDodgeFromUser();
	cout << endl;
	switch (choice)
	{
	case 1:
		cout << "Dodge Charger added to garage." << endl;
		this->car.push_back("Dodge Charger");
		this->year.push_back(2014);
		this->value.push_back(28500);
		addColor();
		break;
	case 2:
		cout << "Dodge Challenger added to garage." << endl;
		this->car.push_back("Dodge Challenger");
		this->year.push_back(2018);
		this->value.push_back(32500);
		addColor();
		break;
	case 3:
		cout << "Dodge Viper added to garage." << endl;
		this->car.push_back("Dodge Viper");
		this->year.push_back(1999);
		this->value.push_back(27800);
		addColor();
		break;
	default:
		cout << "Invalid input. Try again.\n" << endl;
		cin.clear();
		cin.ignore(512, '\n');
		break;
	}
}

void Garage::addColor()
{
	bool runFunction = true;
	while (runFunction)
	{
		int choice = getColorFromUser();
		cin.clear();
		cin.ignore(512, '\n');
		cout << endl;
		switch (choice)
		{
		case 1:
			this->color.push_back("Black");
			cout << "Color selected." << endl;
			runFunction = false;
			cout << endl;
			break;
		case 2:
			this->color.push_back("Silver");
			cout << "Color selected." << endl;
			runFunction = false;
			cout << endl;
			break;
		case 3:
			this->color.push_back("Red");
			cout << "Color selected." << endl;
			runFunction = false;
			cout << endl;
			break;
		case 4:
			this->color.push_back("Yellow");
			cout << "Color selected." << endl;
			runFunction = false;
			cout << endl;
			break;
		default:
			cout << "Invalid input. Try again.\n" << endl;
			cin.clear();
			cin.ignore(512, '\n');

		}
	}
}

void Garage::printGarage()
{
	if (this->car.size() == 0)
	{
		cout << "Garage empty. Nothing to print." << endl;
		cout << endl;
	}
	else {
		cout << "Printing garage..." << endl;
		for (unsigned int i = 0; i < this->car.size(); i++)
		{
			cout << this->car[i] << endl;
			cout << "============================" << endl;
			cout << "Country of Origin: " << this->country[i] << endl;
			cout << "Year: " << this->year[i] << endl;
			cout << "Value: $" << this->value[i] << endl;
			cout << "Color: " << this->color[i] << endl;
			cout << endl;
		}
	}
}

void Garage::saveToFile()
{
	ofstream out("garage.txt");

	if (out.is_open()) {
		if (this->car.size() == 0) {
			cout << "Garage empty. Nothing to save." << endl;
			cout << endl;
		}
		else {
			cout << "Saving garage to file...\n" << endl;

			for (unsigned int i = 0; i < this->car.size(); i++)
			{
				out << this->car[i] << endl;
				out << "============================" << endl;
				out << "Country of Origin: " << this->country[i] << endl;
				out << "Year: " << this->year[i] << endl;
				out << "Value: $" << this->value[i] << endl;
				out << "Color: " << this->color[i] << endl;
				out << endl;
			}
		}
	}
	else {
		cout << "Could not open file to write" << endl;
	}

	out.close();
}

void Garage::printStats()
{
	cout << "Printing garage stats..." << endl;
	cout << "Total value of garage: $" << sumOfValues() << endl;
	cout << "Total cars in garage: " << sumOfCars() << endl;
	cout << "Oldest car in garage: " << getOldestCar() << endl;
	cout << "Newest car in garage: " << getNewestCar() << endl;
	cout << "Most expensive car in garage: " << getMostExpensiveCar() << endl;
	cout << "Most recent addition to garage: " << getMostRecentAddition() << endl;
	cout << endl;
}

void Garage::test()
{
	Garage testGarage;
	Car testCar;
	testGarage.printStats();
	testGarage.printGarage();
	testCar.print();
}
