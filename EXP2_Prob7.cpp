#include <iostream>
using namespace std;

int main()
{
    int num1, sum;
    
    cout << "Enter a number: ";
    cin >> num1;
    
    while (num1 > 0)
    {
        sum = 0;
        for (int i = 1; i <= num1; i++)
        {
            sum += i;
        }
        
        cout << "The sum of all whole numbers from 1 to " << num1 << " is: " << sum << "." << endl;
        cout << "Enter a number: ";
        cin >> num1;
        
    }
    
    cout << "Thank you!" << endl << endl;
    return 0;
}
