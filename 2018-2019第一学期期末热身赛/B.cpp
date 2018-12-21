#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = a*d+b*c;
        int y = b*d;
        //cout<<x<<' '<<y<<endl;
        int m = __gcd(x,y);
        x /= m;
        y /= m;
        cout<<x<<' '<<y<<endl;
    }

    return 0;
}
