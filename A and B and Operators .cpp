#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=1;
    cin>>n;
    while(n--)
    {
        long long int a,b,c=0;
        char sine;
        cin>>a>>b;
        cin>>sine;
        switch(sine)
        {
            case '+':
                {
                    c=a+b;
                    cout<<"Case "<<d++<<": "<<c<<endl;
                    break;
                }
            case '-':
                {
                    c=a-b;
                   cout<<"Case "<<d++<<": "<<c<<endl;
                    break;
                }
            case '*':
                {
                    c=a*b;
                    cout<<"Case "<<d++<<": "<<c<<endl;
                    break;
                }
            case '%':
                {
                    c=a%b;
                    cout<<"Case "<<d++<<": "<<c<<endl;
                    break;
                }
            case '/':
                {
                    c=a/b;
                    cout<<"Case "<<d++<<": "<<c<<endl;
                    break;
                }
            default:
            {
                break;
            }
        }
    }
}
