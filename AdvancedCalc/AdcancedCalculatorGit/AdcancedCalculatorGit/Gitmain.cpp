#include <iostream>
#include <cmath>
using namespace std;

//Prototypes
double areaofCircle(double areaofCircleradius);
double circumferenceofCircle(double radius);
double diameterofCircle(double diaofcircleRadius);
double areaofSquare(double sideA);
double periofSquare(double sidePeri1);
double periofRect(double sidePerimeterA,double sidePerimeterB);
double decideTriType(double triSideA,double triSideB,double triSideC);
double Pythagorean(double ptriSideA, double ptriSideB, double ptriSideC);
double arcTan(double angle, double radius);
double sqaureBasedPyr( double squPyrHeight, double squPyrLength);
double RectBasedPyr(double RectPyrHeight, double RectPyrLength, double RectPyrWidth);
void greeting();
const double PI = 3.14;
using namespace std;

int main(){
    double CirofCircleradius;
    double areaofCircleradius;
    double diaofcircleRadius;
    double areaS;
    double sidePeri1;
    double sidePerimeterA, sidePerimeterB;
    double triSideA, triSideB, triSideC;
    double ptriSideA,ptriSideB,ptriSideC;
    double angle; double radius;
    double squPyrHeight;
    double squPyrLength;
    double RectPyrHeight;
    double RectPyrWidth;
    double RectPyrLength;
    while (true)
    {
        greeting();
        cout << "Please choose an option: " << endl;
        cout <<"1.  Area of Circle\n"
        << "2.  Circumference of circle\n"
        << "3.  Diameter of circle\n"
        << "4.  Area of Square\n"
        << "5.  Perimeter of Square\n"
        << "6.  Perimeter of Rectangle\n"
        << "7.  Determine triangle type\n"
        << "8.  Pythagorean Theorem\n"
        << "9.  Arc Tangent Calculation\n"
        << "10. Volume of Square-Based Pyramid\n"
        << "11. Volume of Rectangle-Based Pyramid"<< endl;
        cout << endl;
        int option;
        cin >> option;
        
        switch (option)
        {
                
            case 1:
            {
                cout << "Please enter the radius: " << endl;
                cin >> areaofCircleradius;
                cout << "The area is: " << areaofCircle(areaofCircleradius) << endl;
                cout << endl;
                break;
            }
                
            case 2:
            {
                cout << "Please enter the radius: " << endl;
                cin >> CirofCircleradius;
                cout << "The circumference is: " << circumferenceofCircle(CirofCircleradius) << endl;
                cout << endl;
                break;
            }
                
            case 3:
            {
                cout << "Please enter the radius: " << endl;
                cin >> diaofcircleRadius;
                cout << "The diameteris: " << diameterofCircle(diaofcircleRadius) << endl;
                cout << endl;
                break;
            }
                
            case 4:
            {
                cout << "Please enter any one side of your square: " << endl;
                cin >> areaS;
                cout << "The area is: " << areaofSquare(areaS) << endl;
                cout << endl;
                break;
            }
                
            case 5:
            {
                cout << "Please enter any one side of your square: " << endl;
                cin >> sidePeri1;
                cout << "The perimeter is: " << periofSquare(sidePeri1) << endl;
                cout << endl;
                break;
            }
                
            case 6:
            {
                cout << "Please enter the length of your Rectangle: " << endl;
                cin >> sidePerimeterA;
                cout << "Please enter the width of your Rectangle: " << endl;
                cin >> sidePerimeterB;
                cout << "The perimeter of your Rectangle is: " << periofRect(sidePerimeterA,sidePerimeterB) << endl;
                cout << endl;
                break;
            }
                
            case 7:
            {
                cout << "Side 1: " << endl;
                cin >> triSideA;
                cout << "Side 2: " << endl;
                cin >> triSideB;
                cout << "Side 3: " << endl;
                cin >> triSideC;
                decideTriType(triSideA, triSideB, triSideC);
                break;
            }
                
            case 8:
            {
                cout << "This option will use Pythagorean Theorem to determine whether or not you have a right triangle" <<endl;
                cin >> ptriSideA;
                cin >> ptriSideB;
                cin >> ptriSideC;
                Pythagorean(ptriSideA,ptriSideB,ptriSideC);
                break;
            }
                
            case 9:
            {
                cout << "Enter the value of data: " << endl;
                cin >> angle;
                cout << "Enter the value of your radius: " << endl;
                cin >> radius;
               cout << "The arc tan is: " << arcTan(angle, radius) << endl;
                break;
                
            }
            case 10:
            {
                cout << "Enter the Height: " << endl;
                cin >>squPyrHeight;
                cout << "Enter the length: " << endl;
                cin >> squPyrLength;
                cout << "The volume is: " << sqaureBasedPyr(squPyrHeight, squPyrLength) << endl;
                break;
            }
                
            case 11:
            {
                cout << "Enter the Height: " << endl;
                cin >> RectPyrHeight;
                cout << "Enter the Width: " << endl;
                cin >> RectPyrWidth;
                cout << "Enter the length: " << endl;
                cin >> RectPyrLength;
                cout << "The volume is: " << RectBasedPyr(RectPyrLength,RectPyrWidth, RectPyrHeight) << endl;
                break;
            }
                
            default:
                cout << "You did not choose one of the options above.  Relooping..." << endl;
                continue;
        }
        
    }
    
    return 0;
}

void greeting(){
    cout << "Welcome to Timothy's Geometric Calculator!" << endl;
    return;
}

double areaofCircle(double areaofCircleradius){
    double area;
    area = pow(areaofCircleradius, 2) * PI;
    return area;
}

double circumferenceofCircle(double CirofCircleradius){
    double circumference;
    circumference = 2 * PI * CirofCircleradius;
    return circumference;
}

double diameterofCircle(double diaofcircleRadius){
    double diameter;
    diameter = 2 * diaofcircleRadius;
    return diameter;
}

double areaofSquare(double sideA){
    double areaS;
    areaS = pow(sideA, 2);
    return areaS;
}

double periofSquare(double sidePeri1){
    double periS;
    periS = 4 * sidePeri1;
    return periS;
}

double periofRect(double sidePerimeterA, double sidePerimeterB){
    double periP;
    periP = (2 * sidePerimeterA) + (2 * sidePerimeterB);
    return periP;
}

double decideTriType(double triSideA,double triSideB,double triSideC){
    //Equalaterial
    if(triSideA == triSideB && triSideA == triSideC && triSideB == triSideC)
        cout << "Equal" << endl;
    else if (triSideA == triSideB || triSideA == triSideC || triSideB == triSideC)
        cout << "2 equal"<<endl;
    else
        cout << "none of the sides are equal" << endl;
    return 0;
}

double Pythagorean(double ptriSideA, double ptriSideB, double ptriSideC){
    if(pow(ptriSideA,2)+pow(ptriSideB,2)==pow(ptriSideC,2)||(pow(ptriSideC,2)-pow(ptriSideB,2)== pow(ptriSideA,2)))
        cout << "Special!" << endl;
    else
        cout << "not special?" << endl;
    return 0;
}

double arcTan(double angle, double radius){
    double arcTangent = angle * radius;
    return arcTangent;
}

double sqaureBasedPyr( double squPyrHeight, double squPyrLength){
    
    double squPyrArea = (pow(squPyrLength, 2) * squPyrHeight)/3;
    return squPyrArea;
}

double RectBasedPyr(double RectPyrHeight, double RectPyrLength, double RectPyrWidth){
    double RectBasedPyrArea = (2*RectPyrLength +2*RectPyrWidth)* RectPyrHeight;
    return RectBasedPyrArea;
}
