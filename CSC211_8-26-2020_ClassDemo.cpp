#include <iostream>
using namespace std;

// Declare Rectangle Class

class Rectangle
{
	// Declares a private section to the class.
	// Anything outside of the class is unable to access these lines.
	
	private:
	// Double allows the variables width and length to be decimal numbers.
	double width;
	double length;
	
	public:
	// Void, used here, delares a function that has not been defined yet.
	void setWidth(double);
	void setLength(double);
	
	// Const specifies that the function will 
	// Not change the data in the calling object.
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	double getPerimeter() const;
	double getVolume() const;
	
};

//=====================================================
// DEFINING FUNCTIONS                                 =
//=====================================================

// setWidth assigns a value to the width member.
// setWidth in here is w, which is doubled to allow for
// Decimal inputs. whatever setWidth is, w will be as well.

void Rectangle::setWidth(double w)
{
	width = w;
}

// setLength assigns a value to the length number.
// Same thing in setLength as there is in setWidth
// setLength is actually l, doubled to allow for decimal input.
// length is l, and l is setLength. so:

// rectLength --> setLength --> l --> length --> area (length times width)
// rectWidth  --> setWidth  --> w --> width  --> area (length times width)

// Confusing? Probably but it'll probably be easier later (maybe.)

void Rectangle::setLength(double l)
{
	length = l;
}

// getWidth returns the value in the width number.

double Rectangle::getWidth() const
{
	return width;
}

// getLength returns the value in the length number.

double Rectangle::getLength() const
{
	return length;
}

// getArea yadda yadda you get it 

double Rectangle::getArea() const
{
	// Area is width times length, if I didn't know this already, i shouldn't be here.
	return width * length;
}

// getPerimeter value, perimeter, capaiche?
double Rectangle::getPerimeter() const
{
	return (2*width)+(2*length);
}

// getVolume gets the volume of the numbers inputted.
// The constant value of height is 8.
double Rectangle::getVolume() const
{
	return length*width*8;
}

//===================================================================
// START OF MAIN FUNCTION                                           =
//===================================================================

int main ()
{
	// Define an instance of the rectangle class
	
	// This makes the rectangle class be read as box, 
	// so we can run a number through the rectangle class above us.
	Rectangle box;
	// Local var for width
	double rectWidth;
	// Local var for length
	double rectLength;
	
	// Ask the user for the width.
	cout << "What is the width of your rectangle?" << endl;
	cin >> rectWidth;
	
	// Ask the user for the length.
	cout << "What is the length of your rectangle?" << endl;
	cin >> rectLength;
	
	// Store Width and Length in the box object
	
	box.setWidth(rectWidth);
	box.setLength(rectLength);
	
	// Display rectangle data
	cout << "The Rectangle's data is as shown." << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
	cout << "Perimeter: " << box.getPerimeter() << endl;
	cout << "Volume: " << box.getVolume() << endl;
	
	// end the program
	return 0;
}
