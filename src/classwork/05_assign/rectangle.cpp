//Write include statement
#include "rectangle.h"

/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

/*
Rectangle::Rectangle(int width, int hight)
{
	width = 4;
	hight = 5;
}*/

Rectanglee::Rectanglee()
{
}

int Rectanglee::get_area()const
{
	return area;
}

// void acc::rectangle::calculate_area() - with namespace
void Rectanglee::calculate_area()
{
	area = width * hight;
}

std::ostream & operator<<(std::ostream & out, const Rectanglee & r)//overloaded operator function
{
	out << "Area: " << r.area << "\n";

	return out;
}

