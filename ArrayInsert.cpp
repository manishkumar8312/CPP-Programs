#include <iostream>
using namespace std;
int main()
{
    int n, pos, val;
    cout << "Enter values of n pos and val: ";
    cin >> n >> pos >> val;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    cout << "Updated Array: ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
