// C++ program to show unary operator overloading
#include <iostream>

using namespace std;

class Distance {
public:

	int feet, inch;

	Distance(int f, int i)
	{
		feet = f;
		inch = i;
	}
  Distance()
	{
		feet = 0;
		inch = 0;
	}

	// Overloading(-) operator to perform decrement
	// operation of Distance object
	Distance operator-()
	{  Distance *temp;
		this->feet--;
		this->inch--;
		cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch<<endl;
    temp->feet=feet;
    temp->inch=inch;
    return *temp;
	}
};

int main()
{
	// Declare and Initialize the constructor
	Distance d1(8, 9),d2;

	// Use (-) unary operator by single operand
	d2=-d1;
  cout<<d1.feet<<" "<<d1.inch<<endl;
	return 0;
}
