#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double a,mile=0;
        cin>>a;
        mile=a*0.621371;
        printf("%.10lf\n",mile);
    }
}
