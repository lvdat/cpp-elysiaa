#include <bits/stdc++.h>

using namespace std;

double dientich(int a, int b, int c)
{
    // ap dung cong thuc Heron
    double p; // nua chu vi
    p = double((a + b + c) / 2.0);
    // tinh dien tich
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Chu vi tam giac: " << (a + b + c) << endl
         << "Dien tich tam giac: " << dientich(a, b, c) << endl;
    return 0;
}