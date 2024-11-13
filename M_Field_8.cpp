#include <iostream>
#include <cmath>
#include "Magnetic_Field_8.h"

using namespace std;

extern double magnitude;
const double MU_0 = 4 * M_PI * 1e-7;

// Constructors
Magnetic_Field::Magnetic_Field() : Field(), M_F(0.0){}
Magnetic_Field::Magnetic_Field(double m_x, double m_y, double m_z) 
	: Field(m_x, m_y, m_z), M_F(0.0) {}

// Destructor
Magnetic_Field::~Magnetic_Field(){}

// Function to calculate magnitude
double Magnetic_Field::calculate_Magnitude(){
	
	double magnitude = sqrt(pow(value[0], 2) + pow(value[1], 2) + pow(value[2], 2));
	
	cout << " Your Magnetic_Field vector magnitude is " << magnitude << ".\n" << endl;
	
	return magnitude;
}

// Function to print values 
void Magnetic_Field::printValues() { 

	cout << "\nYour Magnetic Field values are: (" << value[0] << ", " << value[1] << ", " 
	     << value[2] << ")\n" << endl; 

}


// Function to calculate the magnetic field 
void Magnetic_Field::calculate_Magnetic_Field(double I, double r) { 
	if (r != 0) { 
		
		M_F = (MU_0 * I) / (2 * M_PI * r); 
		
		cout << "Your calculated Magnetic Field at distance " << r << " is " 
			 << M_F << " T \n\n" << endl; 
		
	} else { 
		
		cout << "Error: Distance r cannot be zero." << endl; 
	} 
}