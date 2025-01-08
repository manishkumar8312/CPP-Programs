#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int geta()
    {
        cout << "Enter value for a: ";
        cin >> a;
        return a;
    }
};

class B
{
    int b;

public:
    int getb()
    {
        cout << "Enter value for b: ";
        cin >> b;
        return b;
    }
};

class C
{
    int c;

public:
    int Getc()
    {
        cout << "Enter value for c: ";
        cin >> c;
        return c;
    }
};

class D : public A, public B, public C
{ // D now inherits from A as well
public:
    int sum, avg;
    void display()
    {
        sum = geta() + getb() + Getc(); // Including value of 'a' from class A
        avg = sum / 3;                  // Dividing sum by 3 to get correct average
        cout << "Sum: " << sum << endl;
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    D obj;
    obj.display(); // Call display to show the sum and average
    return 0;
}
