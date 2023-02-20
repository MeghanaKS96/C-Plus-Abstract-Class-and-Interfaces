#include "shape.h"
#include<iostream>

using namespace std;

int main() {
    // implement here
   Square S =  Square(7);
   Triangle T = Triangle(3,4,5,5,6);
   Circle C = Circle(6);
   Ellipse E = Ellipse(3,5);
   
   
cout << "Area of Square : " << S.area()<<std::endl;
cout << "Circumference of Square : " << S.circumference()<<std::endl;
cout << "Sides in a Square : " << S.num_sides()<<std::endl;

cout << "Area of Triangle : " << T.area()<<std::endl;
cout << "Circumference of Triangle : " << T.circumference()<<std::endl;
cout << "Sides in a Triangle : " << T.num_sides()<<std::endl;

cout << "Area of Circle : " << C.area()<<std::endl;
cout << "Circumference of Circle : " << C.circumference()<<std::endl;

cout << "Area of Ellipse : " << E.area()<<std::endl;
    
}