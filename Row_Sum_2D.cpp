#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Declare a matrix of size rows x cols
    int matrix[rows][cols];

    // Input the matrix elements
    cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Calculate and print the sum of each row
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0; // Initialize sum for each row
        cout << "Row " << i + 1 << " elements: ";
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " "; // Print row elements
            rowSum += matrix[i][j];      // Sum the elements of the row
        }
        cout << " | Sum: " << rowSum << endl; // Print the sum of the row
    }

    return 0;
}
