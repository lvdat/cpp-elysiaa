#include <bits/stdc++.h>
#define PI 3.14

using namespace std;

double p;

double dientich(int a, int b, int c)
{
    // ap dung cong thuc Heron
    p = double((a + b + c) / 2.0); // nua chu vi
    // tinh dien tich
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double dientichdtnt(int a, int b, int c)
{
    p = double((a + b + c) / 2.0); // nua chu vi
    double s = dientich(a, b, c);
    double r = s / p; // ban kinh duong tron noi tiep = S/p
    return PI * r * r;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Dien tich duong tron noi tiep tam giac: " << dientichdtnt(a, b, c) << endl;
    return 0;
}