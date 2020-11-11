#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    const float EPS = 1E-5;
    long double e1, e2;
    long double e_n;
    long double x;
    int n;
    cout << "input degree of exponent (x): " ;
    cin >> x ;
    n = 1;
    e1 = 1;
    e_n = x / n;
    e2 = e1 + e_n ;
    while ( abs(e2 - e1) >= EPS ) {
        n++;
        e1 = e2;
        e2 = e1 + e_n * (x / n);
        e_n = e_n * (x / n);
        }
    cout << "e2=" << setw(7) << fixed << setprecision(6) << e2 << endl;
    cout << "e1=" << setw(7) << fixed << setprecision(6) << e1 << endl;
    system ("pause");
    return 0;
}
