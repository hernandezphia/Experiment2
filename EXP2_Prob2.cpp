#include <iostream>
using namespace std;

int main()
{
    int gallons;
    
    cout << "Gallons of water consumed: ";
    cin >> gallons;
    
    float demand = 35, consumption = 1.10, total = demand + (consumption * gallons), payment;
    
    cout << "Amount paid last month: P ";
    cin >> payment;
    
    if (payment<total)
        cout << "\nTotal water bill: P" << total + 20 << " with late charge fee of P20." << endl << endl;
    
    else
        cout << "\nTotal water bill: P" << total << " with change of P" << payment - total << "." << endl << endl;
    
    return 0;
}
