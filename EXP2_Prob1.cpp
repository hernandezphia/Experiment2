#include <iostream>
#include <string>
using namespace std;

int main()
{
    string package;
    float time;
    float price;
    cout << "Enter package: ";
    cin >> package;
    
        if ((package == "A") || (package == "B") || (package == "C"))
        {
            cout << "Number of hours: ";
            cin >> time;
            
            if (package == "A")
            {
                if (time > 10)
                {
                    price = 995 + (time - 10) * 20;
                }
                else
                {
                    price = 995;
                }
            }
            
            else if (package == "B")
            {
                if (time > 20)
                {
                    price = 1495 + (time - 20) * 10;
                }
                else
                {
                    price = 1495;
                }
            }
            
            else
            {
                price = 1995;
            }
            cout << "\nTotal Price = P" << price << endl << endl;
            
        }
        else
        {
            cout << "\nInvalid package!\n";
        }
        
    return 0;
}
