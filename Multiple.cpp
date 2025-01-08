#include <iostream>
using namespace std;
class Engineer
{
public:
    string Specialization;

    void work()
    {
        cout << "I have specialization in " << Specialization << endl;
    }
};
class Youtuber
{
public:
    int subscriber;

    void contentCreator()
    {
        cout << "I have a subscriber base of " << subscriber << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    string name;
    CodeTeacher(string name, string specialization, int subscriber)
    {
        this->name = name;
        this->Specialization = specialization;
        this->subscriber = subscriber;
    }

    void showcase()
    {
        cout << "My name is " << name << endl;
        work();
        contentCreator();
    }
};

int main()
{
    CodeTeacher A1("Manish", "CSE", 49000);
    A1.showcase();
}