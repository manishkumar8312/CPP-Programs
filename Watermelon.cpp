#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int n;
    cin >> n;
    if (n > 2 && n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}