#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, i, j;
    cout << "Nhap m: \n";
    cin >> m;
    cout << "Nhap n: \n";
    cin >> n;

    int arr[m][n];
    int tong_chan = 0, gt_lonnhat_cot1;
    cout << "Nhap ma tran " << m << " x " << n << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if ((i + 1) % 2 == 0)
            {
                tong_chan += arr[i][j];
            }
        }
    }

    gt_lonnhat_cot1 = arr[0][0];
    cout << "Ma tran da nhap: \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
            if (j == 0)
            {
                if (arr[i][j] > gt_lonnhat_cot1)
                {
                    gt_lonnhat_cot1 = arr[i][j];
                }
            }
        }
        cout << endl;
    }

    cout << "Tong gia tri cac hang chan: " << tong_chan << endl;
    cout << "Gia tri lon nhat cot 1: " << gt_lonnhat_cot1 << endl;

    return 0;
}
