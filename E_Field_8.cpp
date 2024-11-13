#include <iostream>
#include <cmath>
#include "Electric_Field_8.h"

using namespace std;

extern double magnitude;
const double EPSILON_0 = 8.854187817e-12;


// Constructors
Electric_Field::Electric_Field() : Field(), E_F(0.0) {}
Electric_Field::Electric_Field(double e_x, double e_y, double e_z) 
	: Field(e_x, e_y, e_z), E_F(0.0) {}


// Destructor
Electric_Field::~Electric_Field(){}


// Function to calculate magnitude
double Electric_Field::calculate_Magnitude(){
	
	double magnitude = sqrt(pow(value[0], 2) + pow(value[1], 2) + pow(value[2], 2));
	
	cout << " Your Electric_Field vector magnitude is " << magnitude << ".\n" << endl;
	
	return magnitude;
	
}
	
// Function to print values 
void Electric_Field::printValues() { 

	cout << "\nYour Electric Field values are: (" << value[0] << ", " 
		 << value[1] << ", " << value[2] << ")\n" << endl; 

}	


// Function to calculate the electric field 
void Electric_Field::calculate_Electric_Field(double Q, double r) { 
	
	if (r != 0) { 
		
		E_F = Q / (4 * M_PI * pow(r, 2) * EPSILON_0); 
		
		cout << "Your calculated Electric Field at distance " 
			 << r << " is " << E_F << " N/C" << endl; 
	
	} else { 
		
		cout << "Error: Distance r cannot be zero." << endl; 
		
	} 
}


