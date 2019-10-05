#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,f=1;
    long long int mul=1;
    cin>>t;
        while(t--)
        {
        long long b,i;
        cin>>b;
        long long int c[b];
        for(i=0;i<b;i++)
        {
            cin>>c[i];
        }
        sort(c,c+b);
            mul=c[0]*c[b-1];
            printf("Case %lld: %lld\n",f++,mul);



        }
    }
















