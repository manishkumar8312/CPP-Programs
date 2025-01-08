#include <iostream>
#include <fstream>
using namespace std;
class student
{
    char name[30];
    int roll_no;
    float marks;

public:
    void getdata()
    {
        cin >> name;
        cin >> roll_no;
        cin >> marks;
    }
};
int main()
{
    student s1;
    fstream file;
    file.open("data.txt", ios::out | ios::binary);
    s1.getdata();
    file.write((char *)&s1, sizeof(s1));
    file.seekg(0);
    file.read((char *)&s1, sizeof(s1));
    cout.write((char *)&s1, sizeof(s1));
    file.close();
    return 0;
}