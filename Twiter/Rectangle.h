#include "Shape.h"
#include <iostream>
#include <cmath> 
using namespace std;

class Rectangle : public Shape
{
public:
    void doSomething() const override;
    void printInputMessage()const override {
        cout << "Enter width and then length for the Rectangle" << endl;
    }
    int calculateRectangleArea() const {
        return this->height * this->width;
    }
    int calculateRectanglePerimeter() const {
        return 2 * (this->height + this->width);
    }
};