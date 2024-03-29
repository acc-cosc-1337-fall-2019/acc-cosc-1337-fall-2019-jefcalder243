/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
//namespace acc {
#include<iostream>
using std::cout;
using std::cin;

	class Rectanglee //could switch this back to rectangle because of namespace
	{
	public:
		Rectanglee(int w, int h) : width(w), hight(h) { calculate_area(); };
		Rectanglee();

		int get_area()const;

	
		friend std::ostream & operator << (std::ostream & out, const Rectanglee & r);
		

	private:
		int area;
		int width;
		int hight;

		void calculate_area();
	};
//}