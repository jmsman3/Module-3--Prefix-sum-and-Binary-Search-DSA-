#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    while (q--)
    {
        int p;
        cin >> p;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == p)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
