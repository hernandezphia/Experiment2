#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c;
    
    cout << "Fibonacci numbers:" << endl;
    cout << a << "," << b << ",";
    for (int i = 3; i <= 22; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c;
        
        if (i < 22)
        {
            cout << ",";
        }
    }
    
    cout << endl << endl;
    return 0;
}
