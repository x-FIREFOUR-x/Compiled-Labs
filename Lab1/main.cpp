#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0,"russian");
    float x1, y1;      // кординати 1-ої вершини
    float x2, y2;      // кординати 2-ої вершини
    float x3, y3;      // кординати 3-ої вершини
    float ab, bc, ca;  // довжини сторін трикутника
    float P, S;        // периметр і площа, яку потрібно знайти

    cout << "Введiть координати першої вершини(x1, y1):"; cin >> x1 >> y1;
    cout << "Введiть координати другої вершини(x2, y2):"; cin >> x2 >> y2;
    cout << "Введiть координати третьої вершини(x3, y3):"; cin >> x3 >> y3;

    ab = sqrt( pow(x1 - x2,2) + pow(y1 - y2,2));
    bc = sqrt( pow(x2 - x3,2) + pow(y2 - y3,2));
    ca = sqrt( pow(x3 - x1,2) + pow(y3 - y1,2));

    if (ab + bc > ca && bc + ca > ab && ca + ab > bc )    // перевірка існування трикутника
        {
        P = ab + bc + ca;
        S = sqrt ( (P/2) * (P/2 - ab) * (P/2 - bc) * (P/2 - ca) );
        printf("Периметр трикутника: %.2f\n", P);
        printf("Площа трикутника: %.2f\n", S);
        }
    else
        cout << "Трикутника не iснує" << endl;

    system("pause");
    return 0;
}
