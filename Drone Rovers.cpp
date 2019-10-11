#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa,ba,ab,bb,a=1;
    string s;
    cin >> n;
   while(n--)
    {
        cin >> aa >> ba >> ab >> bb;
        cin >> s;
        int flag = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R')
            {
                if(i%2 == 0 && aa < 7)
                    aa++;
                else if(i%2 == 1 && ab < 7)
                    ab++;
            }
             if(s[i] == 'L')
            {
                if(i%2 == 0 && aa > 0)
                    aa--;
                 if(i%2 == 1 && ab > 0)
                    ab--;
            }
             if(s[i] == 'U')
            {
                if(i%2 == 0 && ba < 7)
                    ba++;
                else if (i%2 == 1 && bb < 7)
                    bb++;
            }
             if(s[i] == 'D')
            {
                if(i%2 == 0 && ba > 0)
                    ba--;
                else if(i%2 == 1 && bb > 0)
                    bb--;
            }
            if(aa == ab && ba == bb)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "Case " << a++ << ": COLLISION" << endl;
        }
        else
        {
            cout << "Case " << a++  << ": SAFE" << endl;
        }
    }
    return 0;
}
