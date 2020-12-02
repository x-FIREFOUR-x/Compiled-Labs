#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
float Cos (float, float);
int precision (float);
int main ()
{
    float E, a, b;
    cout << "Input the accuracy of the calculation: ";  cin >> E;
    cout << "Input the first number a (rad): ";  cin >> a;
    cout << "Input the second number b (rad): ";  cin >> b;
    cout << "y = " << fixed << setprecision(precision(E)) << Cos(a,E) + pow(Cos(b, E),2) + Cos(a + b, E) << endl;
    return 0;
}
float Cos (float x, float E)
{
    float i, xn, rez1, rez2 ;
    i = 2;
    xn = x * x / i * (-1);
    rez1 =  1;
    rez2 = rez1 + xn;
    while ( abs (rez2 - rez1)>= E)
        {
            i++;
            xn = xn * (x * x / i /  (i + 1) ) * (-1);
            rez1 = rez2;
            rez2 = rez1 + xn;
        }
    return rez2;
}
int precision (float E)
{
    int b = 1 / (float) E;
    int number = 1;
    while (b > 9)
    {
        b = b / 10;
        number++;
    }
   return number;
}
