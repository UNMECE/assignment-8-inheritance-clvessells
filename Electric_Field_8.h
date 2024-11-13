#ifndef ELECTRIC_FIELD_8
#define ELECTRIC_FIELD_8

#include <iostream>
#include "Field.h"

extern double magnitude;


class Electric_Field : public Field {
	
	private:
		double E_F;
	
	public:
  
		// Constructors
		Electric_Field();
		Electric_Field(double e_x, double e_y, double e_z);
		
		// Destructor
		~Electric_Field(); 
		
		// New Functions
		double calculate_Magnitude(); 
		void printValues();
		void calculate_Electric_Field(double Q, double r);
	
};


#endif
