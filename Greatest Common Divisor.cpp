#include<bits/stdc++.h>
using namespace std;

int _GCD(int a,int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a,b,n;
    cin>>n;
    while(n--)
    {
        cin >>a>>b;
        cout << _GCD(a,b)<<endl;;
    }
    return 0;
}
