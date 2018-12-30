#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if (s == "1")
        {
            cout<<0<<endl;
            continue;
        }
        int x = s[s.length()-1]-'0';
        if (x%2 != 0)
            s[s.length()-1] = char(x-1+'0');
        cout<<s<<endl;
    }
    return 0;
}
