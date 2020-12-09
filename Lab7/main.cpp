#include <iostream>
#include <ctime>
using namespace std;
void create_B (float*, int);
int number_min_z (float*, int, int);
int max_B(float*, int, int);
void swap_B (float*,int);
void output (float*, int);
int main()
{
    int n, z, number, index;
    number = 0;
    cout << "Input size n, B(n): ";
    cin >> n;
    cout << "Input natural z: ";
    cin >> z;
    if (z > 0)
    {
        float *ptr = new float[n];
        create_B(ptr, n);

        number = number_min_z (ptr, n, z);
        cout << "The number of elements B(n) less than z: " ;
        cout << number << endl;

        index = max_B(ptr, n, z);
        cout << "The largest element B(n): ";
        cout << *(ptr + index) << endl;
        cout << "Index of the maximum element B(n): ";
        cout << index << endl;

        swap_B(ptr, index);
        output(ptr, n);
    }
    else
        cout << "Entered z is not natural!" << endl;
}

void create_B(float* ptr, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        *(ptr+i) = rand()%1001-500 + (float)(rand()%100)/100;
        cout << *(ptr+i) << " ";
     }
     cout << endl;
}
int number_min_z (float *ptr, int n, int z)
{
    int number = 0;
    for (int i = 0; i < n; i++)
        if (*(ptr+i) < z)
            number++;
    return number;
}
int max_B (float* ptr, int n, int z)
{
    int index = 0;
    while ((index < n) && (*(ptr+index) >= z) )
    {
        index++;
    }
    int max_elem = *(ptr + index);

    for (int i = index + 1; i < n; i++)
        if ( (max_elem < *(ptr+i)) && (*(ptr+i) < z) )
        {
            max_elem = *(ptr+i);
            index = i;
        }
    return index;
}
void swap_B (float *ptr, int index)
{
    float box;
    box = *(ptr+ index);
    *(ptr + index) = *ptr;
    *ptr = box;
}
void output (float*ptr, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";
    cout << endl;
}
