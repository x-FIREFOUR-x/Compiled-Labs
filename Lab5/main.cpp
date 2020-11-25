#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int p, q;
    cout << "input first number: "; cin >> p;
    cout << "input second number: "; cin >> q;
    cout << "mutually prime divisors of the p with the q: " ;
    for (int i = 1; i <= p; i++)
    {
        if (p % i == 0)
        {   bool simple = true;
            int j = 2;
            while ((j <= i) && (simple))
            {
                if ((i % j == 0) && (q % j == 0))
                    simple = false;
                ++j;
            }
            if (simple)
                cout << i << " ";
        }
    }
    return 0;
}
