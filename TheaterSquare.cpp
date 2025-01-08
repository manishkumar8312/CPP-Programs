#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long flagStone_Width = (m + a - 1) / a;
    long long flagStone_Height = (n + a - 1) / a;
    long long total = flagStone_Height * flagStone_Width;
    cout << total << endl;
    return 0;
}