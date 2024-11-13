/* Assignment 8 - Inheritance                           Christie Vessells */

#include <iostream>
#include "Electric_Field_8.h"
#include "Magnetic_Field_8.h"

using namespace std;
 
//Global variable declaration
double magnitude = 0;

 
int main(){

	cout << " \n\n********************* ELECTRIC FIELD ********************* " << endl;
	// Create instances of Electric_Field 
	Electric_Field e1(0, 1e5, 1e3); 
	e1.printValues(); 
	e1.printMagnitude(); 
	e1.calculate_Electric_Field(1e-6, 0.5);
	
	cout << " \n\n********************* Magnetic FIELD ********************* " << endl;
	
	// Create instances of Magnetic_Field
	Magnetic_Field m1(45.247, 85.028, 28.58); 
	m1.printValues(); 
	m1.printMagnitude(); 
	m1.calculate_Magnetic_Field(10, 0.2);
	
	return 0;
}   