#include <bits/stdc++.h>

using namespace std;

int solve(int n)
{
    int count = 0;
    while (n >= 5)
    {
        count += n / 5;
        n /= 5;
    }
    return count;
}

int main()
{
    ifstream input("SOKHONG.INP");
    ofstream output("SOKHONG.OUT");

    int n;
    input >> n;

    output << solve(n) << endl;
}
