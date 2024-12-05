#include <bits/stdc++.h>
using namespace std;

int m, n, i, j;

int tongChan(int **arr, int m, int n)
{
    int tong_sochan = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] % 2 == 0)
                tong_sochan += arr[i][j];
        }
    }
    return tong_sochan;
}

int main()
{
    int m, n, i, j;
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

    cout << "Tong gia tri cac so chan: " << tongChan(arr, m, n) << endl;

    return 0;
}
