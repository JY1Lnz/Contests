#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        string::iterator it;
        it = s.begin();
        cin>>s;
        int i;
        int flag = 0;
        if(s[1] == '0')
            it++;
        for (;it<s.end()-1;it++)
        {
            if (*it>*(it+1))
            {
                s.erase(it);
                flag = 1;
                break;
            }
        }
        if (!flag)
            s.erase(s.end()-1);
        cout<<s<<endl;


    }

    return 0;
}
