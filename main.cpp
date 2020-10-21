#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0,"russian");
    float x1, y1;      // ��������� 1-� �������
    float x2, y2;      // ��������� 2-� �������
    float x3, y3;      // ��������� 3-� �������
    float ab, bc, ca;  // ������� ����� ����������
    float P, S;        // �������� � �����, ��� ������� ������

    cout << "����i�� ���������� ����� �������(x1, y1):"; cin >> x1 >> y1;
    cout << "����i�� ���������� ����� �������(x2, y2):"; cin >> x2 >> y2;
    cout << "����i�� ���������� ������ �������(x3, y3):"; cin >> x3 >> y3;

    ab = sqrt( pow(x1 - x2,2) + pow(y1 - y2,2));
    bc = sqrt( pow(x2 - x3,2) + pow(y2 - y3,2));
    ca = sqrt( pow(x3 - x1,2) + pow(y3 - y1,2));

    if (ab + bc > ca && bc + ca > ab && ca + ab > bc )    // �������� ��������� ����������
        {
        P = ab + bc + ca;
        S = sqrt ( (P/2) * (P/2 - ab) * (P/2 - bc) * (P/2 - ca) );
        printf("�������� ����������: %.2f\n", P);
        printf("����� ����������: %.2f\n", S);
        }
    else
        cout << "���������� �� i���" << endl;

    system("pause");
    return 0;
}
