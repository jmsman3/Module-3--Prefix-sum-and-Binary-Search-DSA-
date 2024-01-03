#include <bits/stdc++.h>
using namespace std;
int main()
{
    // mone rakhte hobe binary search shudhu sort array er opor kaj kore
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;

        int l = 0; //l= left and r = right;
        int r = n - 1;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
  
    return 0;
}
