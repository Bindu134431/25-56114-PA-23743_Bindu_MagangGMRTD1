#include <bits/stdc++.h>
using namespace std;

int ceil(int a, int b)
{
    if (a == 0)
        return 0;

    return (a + b - 1) / b;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (n % 3 != 0 or m % 3 != 0)
    {
        cout << "-1";
        return 0;
    }

    int langkah = 0;

    if (n > 0)
    {
        int kapasitas2 = k / 2;
        if (kapasitas2 == 0)
        {
            cout << "-1";
            return 0;
        }
        int x2 = n / 3;
        int ambil = ceil(2 * x2, kapasitas2);
        int letak = 2 * ceil(x2, kapasitas2);
        langkah += ambil + letak;
    }

    if (m > 0)
    {
        int kapasitas1 = k;
        if (kapasitas1 == 0)
        {
            cout << "-1";
            return 0;
        }
        int x1 = m / 3;
        int ambil = ceil(2 * x1, kapasitas1);
        int letak = 2 * ceil(x1, kapasitas1);
        langkah += ambil + letak;
    }

    cout << langkah;
    return 0;
}