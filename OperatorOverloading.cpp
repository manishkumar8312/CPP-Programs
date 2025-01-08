// You are using GCC
#include <iostream>
using namespace std;
class Student
{
private:
    char rollno;
    char fees;

public:
    Student(char a, char m)
    {
        rollno = a;
        fees = m;
    }
    operator pair<char, char>()
    {
        return make_pair(rollno, fees);
    }
};
int main()
{
    Student st(224, 225);
    pair<char, char> details = st;
    cout << "\n Roll no:" << details.first << ".fees: " << details.second << "\n";
}