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
        if(a>b && a>c)
        {
            cout<<"Case "<<d++<<": "<<a<<endl;
        }
       else if(b>a && b>c)
        {
            cout<<"Case "<<d++<<": "<<b<<endl;
        }
        else
        {
            cout<<"Case "<<d++<<": "<<c<<endl;
        }
    }
}
