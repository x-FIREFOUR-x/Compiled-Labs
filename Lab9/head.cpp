#include "head.h";
#include <string>
#include <iostream>
using namespace std;
string select_word (string str)
{
    int last = str.find(' ');
    string word = str.substr(0, last);
    return word;
}

int palindrom (string word, int number)
{
  int size_w = word.length();
  bool flag = true;

  for (int i = 0; i < size_w / 2 ; i++)
  {
     if (word[i] != word[size_w - i - 1])
        flag = false;
  }

  if (flag)
  {
    number++;
   cout << word << " ";
  }

  return number;

}

string crop_line (string str)
{
    int last = str.find(' ');
    if (last == str.npos)
        return "";

    str = str.erase(0,last+1);
    return str;
}
