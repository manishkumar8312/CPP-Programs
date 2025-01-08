#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Grocery
{
public:
    void getdata()
    {
        int n;
        cout << "Enter the number of items: ";
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; i++)
        {
            string name;
            int quantity;
            float price;
            cout << "Enter the name of item " << (i + 1) << ": ";
            getline(cin, name);
            cout << "Enter the quantity and price for " << name << ": ";
            cin >> quantity >> price;
            cin.ignore();
            cout << "Name: " << name << endl;
            cout << "Total: " << fixed << setprecision(2) << quantity * price << endl;
        }
    }
};

int main()
{
    Grocery x;
    x.getdata();
    return 0;
}
