
#include <iostream>
#include <math.h>

using namespace std;

/*
 Greet user
 Ask for length of rectangle
 Ask for width of rectangle
 Calculate the perimeter and area of rectangle
 Display measures to user
 length
 width
 Exit with a message; Say Goodbye
 */

int main(int argc, const char * argv[]){
	 //Volume of a cylinder
	 double cyRadius;
	 double height;
	 double const cyPi = 3.1459;
	 cout << "Hello, I calculate te volume of a right cylinder"<<endl;
	 cout << "enter the radius of the cylinder"<<endl;
	 cin >> cyRadius;
	 cout << "Enter the height: " <<endl;
	 cin >> height;
	 double volume = pow(cyRadius, 2)*cyPi * height;
	 cout << "The volume of the right cylinder is: "<<volume<<endl;
	 
	 //Area and perimeter of a rectangle
	 int length, width, area, perimeter;
	 double radius,cArea,circumference;
	 double const pi = 3.1459;
	 perimeter = (2*length) + (2*width);
	 cout << "==================Rectangle Calculator==================="<<endl;
	 cout << "I am the rectangle Calculation Companion"<< endl;
	 cout << "Enter the length:  "<< endl;
	 cin >> length;
	 //cout << length << endl;
	 cout << "Enter the width"<< endl;
	 cin >> width;
	 //cout << width << endl;
	 perimeter = (2*length) + (2*width);
	 cout << "The perimeter is " << perimeter << endl;
	 area =  width * length;
	 cout << "The area is " << area << endl;
	 
	 //Area and circumference of a circle
	 cout << "===================Circle Calculator======================="<<endl;
	 cout << "Enter the radius"<<endl;
	 cin >> radius;
	 cArea = radius *radius*pi;
	 cout << "The area of the circle is: "<< cArea<<endl;
	 circumference = radius*2*pi;
	 cout << "The circumference is: " <<circumference<<endl;
	 
	 return EXIT_SUCCESS;
}

