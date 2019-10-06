#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i=1, j, n;
    scanf("%d", &n);

   while(n--)
    {
        long long int cx, cy, px, py, r, distance;
        cin>>cx>>cy>>r>>px>>py;
        distance = sqrt(pow((cx - px), 2) + pow((cy - py), 2));

        if(distance < r)
        {
            printf("Case %d: yes\n", i++);
        }
        else
        {
            printf("Case %d: no\n", i++);
        }
    }
    return 0;
}
