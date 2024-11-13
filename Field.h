#ifndef FIELD_H
#define FIELD_H


#include <iostream>



class Field {
	
	protected:
	
		double *value;
	
	public:
		
		// Constructors
		Field();
		Field(double value_x, double value_y, double value_z);
		
		// Virtual functions (for abstract class Field)
		virtual ~Field();
		virtual void printMagnitude();
};

#endif