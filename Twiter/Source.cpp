#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Shape.h"

using namespace std;

int main() {
	int choice;
	Shape* shape = nullptr; // Initialize shape pointer to nullptr
	do {
		// Display menu
		cout << "Menu:" << endl;
		cout << "1. Rectangle" << endl;
		cout << "2. Triangle" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			// Delete previous shape object (if any)
			if (shape)
				delete shape;
			shape = new Rectangle();
			shape->doSomething();
			break;
		case 2:
			// Delete previous shape object (if any)
			if (shape)
				delete shape;
			shape = new Triangle();
			shape->doSomething();
			break;
		case 3:
			cout << "Exiting program..." << endl;
			break;
		default:
			cout << "Invalid choice! Please try again." << endl;
		}
	} while (choice != 3);
	// Clean up: delete the dynamically allocated object
	delete shape;
	return 0;
}
