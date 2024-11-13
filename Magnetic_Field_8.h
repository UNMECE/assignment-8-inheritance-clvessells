#ifndef MAGNETIC_FIELD_8
#define MAGNETIC_FIELD_8

#include <iostream>
#include "Field.h"

extern double magnitude;


class Magnetic_Field : public Field {
	
	private:
		double M_F;
 	
	public:
  
		// Constructors
		Magnetic_Field();
		Magnetic_Field(double m_x, double m_y, double m_z);
		
		// Destructor
		~Magnetic_Field(); 
		
		// New Functions 
		double calculate_Magnitude(); 
		void printValues();
		void calculate_Magnetic_Field(double I, double r);
	
};


#endif