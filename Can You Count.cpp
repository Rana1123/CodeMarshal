#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long a,T,n,c=1;

    scanf("%lld",&T);
    while(T--)
    {
        set<long long> res;
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            res.insert(a);
        }
        printf("Case %lld: %d\n",c++,res.size());
    }
    return 0;
}
