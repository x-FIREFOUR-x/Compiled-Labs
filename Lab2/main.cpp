#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    float x, y;     // coordinates of dot
    cout << "input coordinates of points (x y): " ;
    cin >> x >> y;

    if ( (x >= -1) && (x <= 1) &&  (pow(y,2) <= 4 - pow(x - 1,2)) )   // condition of belonging to the area is limited to 1-th schedule
        cout << "belong to shape" << endl;
    else
        if ( (x > 1) && (x <= 3) && (abs(y) <= -x +3) )               // condition of belonging to the area is limited to 2-th schedule
            cout << "belong to shape" << endl;
        else
            cout << "no belong to shape" << endl;

 system ("pause");
 return 0;
}
