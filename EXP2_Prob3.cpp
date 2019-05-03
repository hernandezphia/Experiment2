#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    float V;
    const float z = 2.5;
    
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    
    switch(x)
    {
        case 1:
            if (y > 1 && y < 5)
            {
                V = x * y * z;
            }
            
            else if (y >= 5)
            {
                V = x + (y / z);
            }
            
            break;
            
        case 2:
            if (y <= 5)
            {
                V = fabs ((x - y) / z);
            }
            
            else if (y > 5)
            {
                V = x - sqrt (y + z);
            }
            
            break;
            
        default:
            V = x + y + z;
            
    }
    
    cout << "Value of V is = " << fixed << setprecision(2) << setw(10) << V;
    
    cout << endl << endl;
    return 0;
}
