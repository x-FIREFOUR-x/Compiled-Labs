#include <iostream>
using namespace std;
int main()
{
    float Sum1 = 0,       // the value from left to right
          Sum2 = 0;       // the value from right to left
    for (int i = 1; i <= 100; i++)          // calculating the expression from left to right
        if ( i % 2 == 1)
            Sum1 = Sum1 + 1.0 / i;
        else
            Sum1 = Sum1 - 1.0 / i;
    for (int i = 100; i >= 1; i--)          // calculating the expression from right to left
        if ( i % 2 == 1)
            Sum2 = Sum2 - 1.0 / i;
        else
            Sum2 = Sum2 + 1.0 / i;
    if (Sum1 > Sum2)                       // comparison of values
        cout << "Sum1 > Sum2" << endl << "Sum1= " << Sum1 << endl << "Sum2= " << Sum2 << endl;
    else
        if (Sum1 < Sum2)
            cout << "Sum1 < Sum2" << endl << "Sum1= " << Sum1 << endl << "Sum2= " << Sum2 << endl;
        else
            cout << "Sum1 = Sum2" << endl << "Sum1= " << Sum1 << endl << "Sum2= " << Sum2 << endl;
    cin.get();
    return 0;
}
