#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n;
    int a[100];
    string c[100];
    int b[100];
   cin>>n;
   for(i=0;i<n;i++)
        {
            cin>>a[i]>>c[i]>>b[i];
        }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(b[i]<b[j])
            {
                swap(b[i],b[j]);
                swap(c[i],c[j]);
                swap(a[i],a[j]);
            }
            else if(i!=j && b[i]==b[j])
            {
                if(a[i]>a[j])
                {
                    swap(b[i],b[j]);
                    swap(c[i],c[j]);
                    swap(a[i], a[j]);
                }
            }
        }
    }

    cout<<"Roll | Name       | Marks"<<endl;
    cout<<"-------------------------"<<endl;


    for(i=0; i<n; i++)
    {
        printf("%4d | ", a[i]);
        int l = c[i].size();
        cout<<c[i];
        for(j=l; j<=10; j++)
            cout<<" ";
        cout<<"| "<<b[i]<<endl;

    }

}
