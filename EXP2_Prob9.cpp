#include<iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "How many rows: ";
    cin >> rows;
    cout << "How many columns: ";
    cin >> columns;

    for (int i = 0; i < columns; i++)
    {
        cout << endl;
        cout << "*";
        for (int j = 0; j < rows-1; j++){
            cout << " " << "*";
        }

    }
    cout << "\n\n";
    return 0;
}
