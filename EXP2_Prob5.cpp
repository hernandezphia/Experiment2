#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Counting..." << "\n";
    
    for (num=1; num<10; num++)
    {
        cout << num << ",";
    }
    
    for (num = 10; num>=10, num <= 29; num+=2)
    {
        cout << num << ",";
    }
    
    if (num==30)
    {
        cout << num << " ";
    }
    
    cout << "\n\n";
    
    return 0;
}
