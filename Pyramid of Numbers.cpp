#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,b=1;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        cout<<"Case "<<b++<<":"<<endl;
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<j;
            }
            cout<<endl;
        }
    }
}
