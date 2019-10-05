#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n>=1 && n<=100)
    {
        string a[n];
        int b[n],c[n];
        for(i=0;i<n;i++)
        {
            cin>>b[i]>>a[i]>>c[i];
        }
        sort(c,c+n);
    }
}
