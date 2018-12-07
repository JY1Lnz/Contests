#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,x;
        cin>>l>>r>>x;
        long long n = r/x-(l-1)/x;
        cout<<n<<endl;
    }

    return 0;
}
