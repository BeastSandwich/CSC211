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
	
};

// setWidth assigns a value to the width member.

void Rectangle::setWidth(double w)
{
	width = w;
}

// setLength assigns a value to the length number.

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
	return width * length;
}

//===================================================================
// START OF MAIN FUNCTION                                           =
//===================================================================

int main ()
{
	// Define an instance of the rectangle class
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
	
	// end the program
	return 0;
}