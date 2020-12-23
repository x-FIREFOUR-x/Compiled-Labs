#include <iostream>
#include <string>
#include "head.h"
using namespace std;
int main()
{
    string str;
    int number = 0;
    cout << "Input string: ";
    getline(cin,str);

    cout << "Palindroms: " ;
    while (!str.empty())
    {
        string word = select_word(str);
        number = palindrom (word, number);
        str = crop_line (str);
    }
    cout << endl;
    cout << "Number of palindroms: " << number << endl;

    return 0;
}
