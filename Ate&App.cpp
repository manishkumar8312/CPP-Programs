#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream myfile("sample.txt", ios::trunc);
    myfile << "Only this line will appear in the file.";
}