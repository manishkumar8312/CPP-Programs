#include <iostream>
using namespace std;
class BC
{
public:
    void show()
    {
        cout << "Show() of base class" << endl;
    }
};
class DC : public BC
{
public:
    void show()
    {
        cout << "Show() of derived Class\n";
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    cout << "\n-----Early Binding------------!\n";
    cout << "bptr points to base objects\n";
    bptr->show();
    DC derived;
    bptr = &derived;
    cout << "bptr now points to derived objects\n";
    bptr->show();
    return 0;
}