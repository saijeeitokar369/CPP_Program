// Implement Function Overloading by defining two functions named area.

// The first function, area(double length, double width), should calculate and return the area of a rectangle.

// The second function, area(double side), should calculate and return the area of a square side *side. Demonstrate that the C++ compiler can correctly choose between the two functions based on the number of arguments provided in the main function.

#include<iostream>
using namespace std;

double area(double length, double width){
    return length*width;
}

double area(double side){
    return side*side;
}

int main()
{
    double length,width,a;
    cout<<"length and width:";
    cin>>length>>width;
    cout<<"Area of rectangle:"<<area(length,width)<<"\n";


    double side,b;
    cout<<"side:";
    cin>>side;
    cout<<"Area of square:"<<area(side);

}