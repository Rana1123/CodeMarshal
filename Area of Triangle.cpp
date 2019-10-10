#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,d=1;;
    cin>>n;

   while(n--)
    {
        double a, b, c;
        double s = 0, area = 0;
        cin>>a>>b>>c;

        s = (a+b+c)/2;

        area = sqrt(s * (s-a) * (s-b) * (s-c));

        printf("Case %d: %.10lf\n",d++, area);
    }

    return 0;
}
