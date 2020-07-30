#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Parking.h"
#include "Utils.h"
using namespace std;
namespace sdds {
	Parking::Parking(const char* datafile) :
		m_datafile(nullptr),
		m_parkingMenu("Parking Menu, select an action:"),
		m_vehicleMenu("select type of the vehicle:", 1) {
		// if parameter datafile is good
		if (datafile != nullptr) {
			// allocate memory and copy string
			m_datafile = new char[strlen(datafile) + 1];
			strcpy(m_datafile, datafile);
		}
		if (load()) {
			// add to parking menu 5 items (first page of WS documentation)
			// no numbers, dashes or spaces!
			m_parkingMenu.add("Park Vehicle");
			m_parkingMenu.add("Return Vehicle");
			m_parkingMenu.add("List Parked Vehicles");
			m_parkingMenu.add("Close Parking (End of day)");
			m_parkingMenu.add("Exit Program");

			// add to vehicle menu 3 items (first page of WS documentation)
			// no numbers, dashes or spaces!
			m_vehicleMenu.add("Car");
			m_vehicleMenu.add("Motorcycle");
			m_vehicleMenu.add("Cancel");
		}
		else {
			// message 'Error in data file'
			cout << "Error in data file" << endl;
			// set empty state
			m_datafile = nullptr;
		}
	}

	void Parking::parkVehicle() {
		// run the vehicle menu save the user's choice
		// print 'Parking Car' (if choice 1)
		// print 'Parking Motorcycle' (if choice 2)
		// print 'Cancelled parking' (if choice 3)
	}

	void Parking::returnVehicle() {
		// message + EOL
		cout << "Returning Vehicle" << endl;

	}

	void Parking::listParkedVehicles() {
		// message + EOL
		cout << "Listing Parked Vehicles" << endl;
	}
	
	bool Parking::closeParking() {
		// message + EOL
		cout << "Closing Parking" << endl;
		return true;
	}
	
	bool Parking::exitParkingApp() {
		// call confirmed() function from Utils module
		// if it returns true, print 'Exiting program!' + EOLD and return true
		// otherwise return false
	}

	void Parking::parkingStatus() const {
		// message + EOL

	}

	//Parking::Parking(const Parking&) {
	//	save();
	//	delete[] m_datafile;
	//	m_datafile = nullptr;
	//	delete[] m_parkingMenu;
	//	m_parkingMenu = nullptr;
	//};

}