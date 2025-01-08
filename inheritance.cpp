#include <iostream>
#include <cstring>
using namespace std;
class fruit
{
    string color;
    string shape;

public:
    void getdata()
    {
        getline(cin, color);
        getline(cin, shape);
    }
    void display()
    {
        cout << color << endl;
        cout << shape << endl;
    }
};
class Mango : public fruit
{
    string taste;

public:
    void getdata1()
    {
        getdata();
        getline(cin, taste);
    }
    void display1()
    {
        display();
        cout << taste << endl;
    }
};
int main()
{
    Mango m;
    m.getdata1();
    m.display1();

    return 0;
}