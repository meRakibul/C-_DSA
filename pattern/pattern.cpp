#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)  // Outer loop: iterates through each row
    {
        for (int j = 1; j <= col; j++)  // Inner loop: iterates through each column in the current row
        {
            cout << "*";  // Print an asterisk for each column in the row
        }
        cout << endl;  // Move to the next line after printing all columns in the current row
    }
    
    return 0;
}
