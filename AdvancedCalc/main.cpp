#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[])
{

	 /*
	  d = vt
	  Distance
	  Velocity
	  Time

	  2.  Quadratic Formula
	  x = a^2 +2ab +b^2
	  K^2 means k*k

	  3.  Circle cube, sphere, Pyramid
	  4.  Frustum, Cylinder

	  5.  5a + (3-b)^3 -7c^4 +8(3c-d)
	  6.  Quadratic forumla
	  7.  sqaureRoot(a^2 +b^2+c^2)

	  Formula Reference:
		  pi = 3.14159

		  Circle
			   Area = pi * r^2
			   Circumference = 2 * pi * r
		  Sphere:

			   Volume = (4/3) * pi ^3 * r
			   Surface Area = 4 * pi * r^2
		  Cube:
			   Volume: a^3; a is the edge
			   Surface Area = 6a^2
			   Perimeter of a cube = 12a;  12 edges in a cube
		  Right Rectangular Pyramid:
                    l = base length
					w = base width
					h = pyramid height
			   Surface Area:  lw +l * radical ((w/2)^2+h^2) + w * radical ((l/2)^2 + h^2)
               Volume = (1wh/3)
            Cylinder:
                Volume = pi * r^2 * h
                Surface Area = (2 * Pi * r * h) + (2*pi * r^2)
	  */

      //pi will always be this value.  Constants do not change
	  double const pi = 3.14159;

      //Sort variables by type
	  double cylinderRadius;
	  double cylinderHeight;
	  double sphereRadius;
	  double circleRadius;
	  double sphereHeight;
	  double cubeEdge;

	  double circleArea; //Done!
	  double circleCircumference; //Done!
	  double sphereSA; //Done!
	  double sphereVolume; //Done!
	  double cylinderSA;//Done!
	  double cylinderVolume;//Done!
	  double cubeVolume;
	  double cubePerimeter;
	  double cubeSA;

	  /*TODO
          Cube:
			   Volume: a^3; a is the edge
			   Surface Area = 6a^2
			   Perimeter of a cube = 12a;  12 edges in a cube
		  Right Rectangular Pyramid:
                    l = base length
					w = base width
					h = pyramid height
			   Surface Area:  lw +l * radical ((w/2)^2+h^2) + w * radical ((l/2)^2 + h^2)
               Volume = (1wh/3)
           5a + (3-b)^3 -7c^4 +8(3c-d)
	  6.  Quadratic forumla
	  7.  sqaureRoot(a^2 +b^2+c^2)
          Frustum

	  */

     /*Do not have to show the greeting everytime the program loops.  Only need to show it once!
       Second cout statement does not show in console.  USed '\n' for new line instead.  Same functionality
       Able to show muti-line text without using multiple cout statements.  Must have start and end quotes for each new line of text
     */
     cout << "Hello! I am an advanced Geometric Calculator v0.1!\n"
     "Note: I hardcoded the value of pi to be '3.14159' ";
     cout << endl<<endl;

     cout <<"List of features:\n"
                "\tArea of a circle\n"
                "\tCircumference of a circle\n"
                "\tSurface Area of a sphere\n"
                "\tVolume of a sphere\n"
                "\tVolume of a cylinder\n"
                "\tSurface area of a cylinder\n"
                "\tSurface area of a cube (NEW!)\n"
                "\tPerimeter of a cube (NEW!)";
     cout<<endl<<endl;

      //Program starts here and loops infinitely until the user triggers the else statement, enters a non-double or negative value
	  while (true) {
        //Calculate the Area of a circle
        cout <<"===============Area of a circle================="<<endl;
        cout <<"Enter the radius: " <<endl;
        cin >> circleRadius;
          if (circleRadius < 0.0 ){
            break;
            }
        circleArea = pi * pow(circleRadius,2.0);
        cout <<"The area of the circle is: "<<circleArea<<endl;

        //Calculate the circumference of a circle
        cout <<"===============Circumference of a circle============="<<endl;
        cout <<"Enter the radius: "<<endl;
        cin >> circleRadius;
          if (circleRadius < 0.0 ){
            break;
            }
        circleCircumference = 2.0*pi*circleRadius;
        cout <<"The circumference of the circle is: "<< circleCircumference <<endl;

        //Calculate the surface area of a sphere
        cout <<"================Surface area of a sphere==============="<<endl;
        cout <<"Enter the radius: "<<endl;
        cin >>sphereRadius;
          if (sphereRadius < 0.0 ){
            break;
            };
        //Surface Area = 4 * pi * r^2
        sphereSA = 4*pi*pow(sphereRadius,2.0);
        cout <<"The surface area is: "<<sphereSA<<endl;

        //Calculate the volume of a sphere
        cout <<"=================Volume of a sphere================"<<endl;
        cout <<"Enter the radius: "<<endl;
        cin >> sphereRadius;

          if (sphereRadius < 0.0 ){
            break;
            }
        cout <<"Enter the height of the sphere: "<<endl;
        cin >> sphereHeight;

          if (sphereHeight < 0.0 ){
            break;
            }

        //Volume = pi * r^2 * h
        sphereVolume = pi * pow(sphereRadius,2.0);
        cout <<"The volume is: "<<sphereVolume<<endl;

        cout <<"===============Volume of a cylinder=============="<<endl;
        /*Cylinder:
                Volume = pi * r^2 * h
                Surface Area = (2 * Pi * r * h) + (2*pi * r^2)*/

        cout <<"Enter the radius: "<<endl;
        cin >> cylinderRadius;
            if (cylinderRadius < 0.0){
                break;
            }
        cout <<"Enter the height: "<<endl;
        cin >> cylinderHeight;
            if(cylinderHeight < 0.0){
                break;
            }
        cylinderVolume = cylinderHeight * pi * pow(cylinderRadius,2.0);
        cout<<"The volume is: "<<cylinderVolume<<endl;

        cout <<"================Surface Area of a cylinder=================="<<endl;
        cout<<"Enter the radius: "<<endl;

        cin >>cylinderRadius;
             if(cylinderRadius < 0.0){
                break;
            }
        cout<<"Enter the height: "<<endl;
        cin >> cylinderHeight;
            if (cylinderHeight < 0.0){
                break;
            }
        cylinderSA = (2.0*pi*cylinderRadius*cylinderHeight) + (2.0*pi*pow(cylinderRadius,2));
        cout<<"The surface area is: "<<cylinderSA<<endl;

        cout<<"===============Volume of a cube============="<<endl;
        /*Cube:
			   Volume: a^3; a is the edge
			   Surface Area = 6a^2
			   Perimeter of a cube = 12a;  12 edges in a cube*/

        cout<<"Number of edges: "<<endl;
        cin >>cubeEdge;
            if(cubeEdge < 0){
                break;
            }
        cubeVolume = pow(cubeEdge,3);
        cout<<"The volume of the cube is: "<<cubeVolume<<endl;

        cout<<"=================Surface Area of a Cube=============="<<endl;
        cout<<"Number of edges: "<<endl;
        cin >> cubeEdge;
            if(cubeEdge < 0){
                break;
            }
        cubeSA = 6*pow(cubeEdge,2);
        cout<<"The surface area of the cube is: "<<cubeSA<<endl;

        cout <<"===============Perimeter of a cube================="<<endl;
        cout<<"Number of edges: "<<endl;
        cin >> cubeEdge;
            if(cubeEdge <0){
                break;
            }
        cubePerimeter = 12*cubeEdge;
        cout<<"The perimeter of the cube is: "<<cubePerimeter<<endl;
	  }








	 /*double score1,score2,score3,score4,score5;
	  cout << "Input scores [5]" << endl;
	  cin >> score1 >> score2 >> score3 >> score4 >> score5;
	  double average = (score1+score2+score3+score4+score5)/5.0;
	  cout << "Average is " << average << endl;*/


	 return 0;
}
