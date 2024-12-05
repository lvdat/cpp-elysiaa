#include <bits/stdc++.h>
using namespace std;

int m, n, i, j;

int main()
{
    int d, c;
    cout << "Nhap m: \n";
    cin >> m;
    cout << "Nhap n: \n";
    cin >> n;

    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    cout << "Nhap ma tran " << m << " x " << n << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Ma tran da nhap: \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Nhap dong d: \n";
    cin >> d;
    cout << "Nhap cot c: \n";
    cin >> c;

    int tongd = 0, tongc = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == d - 1)
            {
                tongd += arr[i][j];
            }
            if (j == c - 1)
            {
                tongc += arr[i][j];
            }
        }
    }
    cout << "Tong gia tri dong " << d << ": " << tongd << endl;
    cout << "Tong gia tri cot " << c << ": " << tongc << endl;

    return 0;
}
