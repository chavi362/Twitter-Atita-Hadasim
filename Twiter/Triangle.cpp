#include "Triangle.h"

void Triangle::printTriangle() const
{
	if ((this->width % 2 == 0) || (this->height > (2 * this->width)))
	{
		cout << "Cannot print triangle." << endl;
		return;
	}
	stack<int> printsStack;
	int forPrint = this->width;
	printsStack.push(forPrint);
	int numInRow = (this->height) / (this->width / 2);
	while (forPrint != 3)
	{
		forPrint -= 2;
		for (int i = 0; i < numInRow; i++)
		{
			printsStack.push(forPrint);
		}
	}
	int divisionRemainer = (this->height) - (this->width / 2 - 1) * numInRow - 2;
	for (int i = 0; i < divisionRemainer; i++)
	{
		printsStack.push(forPrint);
	}
	printsStack.push(1);
	while (!printsStack.empty())
	{
		for (int i = 0; i < (width - printsStack.top()) / 2; i++)
			cout << " ";
		for (int i = 0; i < printsStack.top(); i++)
			cout << "*";
		cout << endl;
		printsStack.pop();
	}
}
