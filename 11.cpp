#include <bits/stdc++.h>
#define PI 3.14

using namespace std;

double dientich(int a, int b, int c)
{
    double p;
    // ap dung cong thuc Heron
    p = double((a + b + c) / 2.0); // nua chu vi
    // tinh dien tich
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double dientichdtngoaitiep(int a, int b, int c)
{
    double s = dientich(a, b, c);
    double r = (a * b * c) / (4 * s); // ban kinh duong tron ngoai tiep
    return PI * r * r;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Dien tich duong tron ngoai tiep tam giac: " << dientichdtngoaitiep(a, b, c) << endl;
    return 0;
}