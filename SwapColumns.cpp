#include <bits/stdc++.h>
using namespace std;
class MatrixManipulator
{
public:
    void getdata(int arr[10][10], int r, int c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void swapColumns(int r, int arr[10][10], int c1, int c2)
    {
        for (int i = 0; i < r; i++)
        {
            int temp = arr[i][c1];
            arr[i][c1] = arr[i][c2];
            arr[i][c2] = temp;
        }
    }
    void putdata(int arr[10][10], int r, int c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int T;
    cin >> T;
    MatrixManipulator m;
    int arr[10][10];
    while (T--)
    {
        int r, c;
        cin >> r >> c;
        m.getdata(arr, r, c);
        int c1, c2;
        cin >> c1 >> c2;
        m.swapColumns(r, arr, c1, c2);
        m.putdata(arr, r, c);
    }
    return 0;
}