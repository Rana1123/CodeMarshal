#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=1;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>=b && a<=c)|| (a>=c && a<=b))
        {
            cout<<"Case "<<d++<<": "<<a<<endl;
        }
        else if((b>=a && b<=c)||(b>=c && b<=a))
        {
            cout<<"Case "<<d++<<": "<<b<<endl;        }
        else if((c>=a&& c<=b)||(c>=b && c<=a))
        {
             cout<<"Case "<<d++<<": "<<c<<endl;
        }
    }
}
