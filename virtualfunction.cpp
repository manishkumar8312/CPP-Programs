#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};
class Rectangle : public Shape
{
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double calculateArea() override
    {
        return length * breadth;
    }
    double calculatePerimeter() override
    {
        return 2 * (length + breadth);
    }
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() override
    {
        return 3.14 * radius * radius;
    }
    double calculatePerimeter() override
    {
        return 2 * 3.14 * radius;
    }
};
int main()
{
    Shape *sp;
    sp = new Rectangle(3.0, 2.0);
    cout << "Area of Rectangle " << sp->calculateArea() << endl;
    cout << "Perimeter of Rectangle " << sp->calculatePerimeter();
}