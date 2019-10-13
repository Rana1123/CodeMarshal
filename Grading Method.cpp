#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=1;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a>=90 && a<=100)
        {
            cout<<"Student "<<b++<<": A+"<<endl;
        }
        else if(a>=80 && a<=89)
        {
            cout<<"Student "<<b++<<": A"<<endl;
        }
        else if(a>=70 && a<=79)
        {
            cout<<"Student "<<b++<<": A-"<<endl;
        }
        else if(a>=60 && a<=69)
        {
            cout<<"Student "<<b++<<": B+"<<endl;
        }
        else if(a>=50 && a<=59)
        {
            cout<<"Student "<<b++<<": B-"<<endl;
        }
        else if(a>=40 && a<=49)
        {
            cout<<"Student "<<b++<<": C"<<endl;
        }
        else if(a>=35 && a<=39)
        {
            cout<<"Student "<<b++<<": D"<<endl;
        }
        else
        {
            cout<<"Student "<<b++<<": F"<<endl;
        }
    }
}
