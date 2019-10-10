#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,d=1;
    long double c;
    cin >> n;
    while(n--)
    {
        long long a,b;
        cin >> a;
        cout << "Case " << d++ << ": ";
        if (a% 180 == 0 && a >= 180) {
            b = (a / 180) + 2;
            c = (long double)a / b;
            cout << b << " " << setprecision(10) << round(c);
        }
         else
        {
            cout << "Impossible";
        }
        cout << endl;
    }
    return 0;
}
