#include<bits/stdc++.h>
using namespace std;
int main()
{

    int M,n;
    cin>>M;
    while(M--)
    {
        int i;
        set<string> rana;
        cin >> n;
        for(i = 0; i < n; i++){
            string str;
            cin >> str;
            rana.insert(str);
        }
        cout << rana.size() << endl;
    }
    return 0;
}
