#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,c=0;
    int i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        c=c^a;
    }
    cout <<c<< endl;
    return 0;
}
