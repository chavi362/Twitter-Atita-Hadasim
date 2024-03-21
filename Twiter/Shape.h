#pragma once
#include <iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;

public:
    Shape() {
        printInputMessage();
        int hei, wid;
        cin >> wid >> hei;
        this->width = wid;
        this->height=hei;
    }
    virtual void printInputMessage() const
    {
        cout << "enter width and height" << endl;
    }
    // Pure virtual function (interface)
    virtual void doSomething() const = 0;
    // Virtual destructor 
    virtual ~Shape() {}
};
