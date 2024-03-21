#include "Rectangle.h"
#include <iostream>
using namespace std;
void Rectangle::doSomething() const
{
    {
        if (abs(this->height - this->width) > 5) {
            cout << "Area: " << calculateRectangleArea() << endl;
        }
        else {
            cout << "Perimeter: " << calculateRectanglePerimeter() << endl;
        }
    }
}
