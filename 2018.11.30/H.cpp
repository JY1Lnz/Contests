#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        string b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        a.erase(unique(a.begin(),a.end()),a.end());
        b.erase(unique(b.begin(),b.end()),b.end());
        if (a == b)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}
