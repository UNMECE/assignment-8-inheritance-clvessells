#include <iostream>
#include <cmath>

#include "Field.h"

using namespace std;

// Constructors
Field::Field() {
    
	value = new double[3]{0.0, 0.0, 0.0};
	
}

Field::Field(double value_x, double value_y, double value_z) {
    
	value = new double[3]{value_x, value_y, value_z};
	
}

// Destructor
Field::~Field() {
    
	delete[] value;
	
}

// Function to print the magnitude
void Field::printMagnitude() {
    
	double magnitude = sqrt(pow(value[0], 2) + pow(value[1], 2) + pow(value[2], 2));
    cout << "The Magnitude of your vector is: " << magnitude << "\n" << endl;
    
}
