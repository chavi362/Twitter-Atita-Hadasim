#pragma once
#include "Shape.h"
#include <stack>
class Triangle :public Shape
{
public:
	int calculateTrianglePerimeter() const
	{
		return   this->height + 2 * this->width;
	}
	void printInputMessage()const override {
		cout << "Enter width and length for the triangle" << endl;
	}
	void printTriangle() const;
	void doSomething() const override
	{
		cout << "press 1 for priameter 2 for print" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Perimeter: " << calculateTrianglePerimeter() << endl;
			break;
		case 2:
			printTriangle();
			break;
		default:
			cout << "invalide choice" << endl;
			break;
		}
	}
};

