#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=1;
    cin>>n;
    while(n--)
    {
        int a,i,sum=0,avg=0;
        cin>>a;
        int b[a];
        for(i=0;i<a;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<a;i++)
        {
            sum=sum+b[i];
        }
        avg=sum/a;
        cout<<"Case "<<d++<<": "<<avg<<endl;    }
}
