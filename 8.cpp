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

double duongcao(double canh, double s)
{
    // de tinh duong cao tuong ung 1 canh
    // ta dung cong thuc
    // h = (2 * S) / canh
    return 2 * s / canh;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double s = dientich(a, b, c);
    cout << "Duong cao ung voi canh a: " << duongcao(a, s) << endl;
    cout << "Duong cao ung voi canh b: " << duongcao(b, s) << endl;
    cout << "Duong cao ung voi canh c: " << duongcao(c, s) << endl;
    cout << "=> Duong cao lon nhat co do dai: " << max({duongcao(a, s), duongcao(b, s), duongcao(c, s)});
    return 0;
}