#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
using namespace std;
void create_primary (float**, int, int);
void create_secondary (float**, float**, int, int);
void Swap (float**, int, int);
void output (float**, int, int);
int main ()
{
    srand(time(0));
    int n, m;
    cout << "Input size matrix (n m): ";
    cin >> n >> m;
    float** C = new float*[n];
    float** B = new float*[n];
    float** Y = new float*[n];
    float** Z = new float*[n];


    cout << "C(" << n << "x" << m << "):" << endl;
    create_primary (C, n, m);
    cout << "B(" << n << "x" << m << "):" << endl;
    create_primary (B, n, m);

    create_secondary (C, Y, n, m);
    create_secondary (B, Z, n, m);

    Swap (Y, n, m);
    Swap (Z, n, m);

    cout << "Y(" << n << "x" << m << "):" << endl;
    output (Y, n, m);
    cout << "Z(" << n << "x" << m << "):" << endl;
    output (Z, n, m);

    return 0;
}

void create_primary (float** P, int n, int m)
{
    for (int i =0; i < n; i++)
        P[i]= new float [m];


    for (int i =0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            P[i][j] = rand()%1001-500 + (float)(rand()%100)/100;
            cout << setw(7) << fixed << setprecision(2) << P[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

}
void create_secondary (float** P, float** S, int n, int m)
{
    for (int i =0; i < n; i++)
        S[i]= new float [m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            S[i][j] = P[i][j];
}
void Swap (float** P, int n, int m)
{
    float Max, Min;
    int k_max, k_min;
    Max = P[0][0];
    Min = P[0][0];
    k_max = 0;
    k_min = 0;

    for (int i = 0; i < n; i++)
        for (int j=0; j < m; j++)
        {
            if (P[i][j]> Max)
            {
               Max = P[i][j];
               k_max = i;
            }
            if (P[i][j] < Min)
            {
               Min = P[i][j];
               k_min = i;
            }
        }

    float* box = P[k_max];
    P[k_max] = P[k_min];
    P[k_min] = box;
}
void output (float** P, int n, int m)
{
    for (int i =0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(7) << fixed << setprecision(2) << P[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
